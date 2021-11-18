//
// Created by Jeuio on 18.11.2021.
//

#include "Networking.h"

ServerNetwork::ServerNetwork() {

    WSADATA wsaData;

    ListenSocket = INVALID_SOCKET;
    ClientSocket = INVALID_SOCKET;

    struct addrinfo *result = nullptr;
    struct addrinfo hints;

    iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (iResult != 0) {
        printf("WSAStartup failed with error: %d\n", iResult);
        exit(1);
    }

    ZeroMemory(&hints, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;
    hints.ai_flags = AI_PASSIVE;

    if (iResult != 0) {
        printf("getaddrinfo failed with error: %d\n", iResult);
        WSACleanup();
        exit(1);
    }

    listenSocket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);

    if (listenSocket == INVALID_SOCKET) {
        printf("socket failed with error: %d\n", WSAGetLastError());
        freeaddrinfo(result);
        WSACleanup();
        exit(1);
    }

    u_long iMode = 1;
    iResult = ioctlsocket(listenSocket, FIONBIO, &iMode);

    if (iResult == SOCKET_ERROR) {

        printf("ioctlsocket failed with error: %d\n", WSAGetLastError());
        closesocket(listenSocket);
        WSACleanup();
        exit(1);
    }

    iResult = bind(listenSocket, result->ai_addr, (int)result->ai_addrlen);
    if (iResult == SOCKET_ERROR) {
        printf("bind failed with error: %d\n", WSAGetLastError());
        freeaddrinfo(result);
        closesocket(listenSocket);
        WSACleanup();
        exit(1);
    }

    freeaddrinfo(result);

    iResult = listen(listenSocket, SOMAXCONN);

    if (iResult == SOCKET_ERROR) {
        printf("listen failed with error: %d\n", WSAGetLastError());
        closesocket(listenSocket);
        WSACleanup();
        exit(1);
    }
}





bool ServerNetwork::acceptNewClient(unsigned int &id) {

    clientSocket = accept(listenSocket, nullptr, nullptr);

    if (clientSocket != INVALID_SOCKET) {

        char value = 1;
        setsockopt(clientSocket, IPPROTO_TCP, TCP_NODELAY, &value, sizeof(value));

        sessions.insert(pair<unsigned int, SOCKET>(id, clientSocket));

        return true;
    }

    return false;
}