//
// Created by Jeuio on 18.11.2021.
//

#include "Networking.h"




ClientNetwork::ClientNetwork() {

    WSADATA wsaData;

    ConnectSocket = INVALID_SOCKET;


    struct addrinfod    *result = nullptr,
                        *ptr = nullptr,
                        hints;

    iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);

    if (iResult != 0) {

        printf("WSAStartup failed with error %d\n", iResult);
        exit(1);
    }

    ZeroMemory(&hints, sizeof(hints));
    hints.ai_family = AF_UNSPEC;
    hints.ai_sockettype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;

    iResult = getaddrinfo("127.0.0.1", DEFAULT_PORT, &hints, &result);

    if (iResult != 0) {
        printf("getaddrinfo failed with error: %d\n", iResult);
        WSACleanup();
        exit(1);
    }

    for(ptr = result; ptr != nullptr; ptr = ptr->ai_next) {

        ConnectSocket = socket(ptr->ai_family, ptr->ai_socktype, ptr->ai_protocol);

        if (ConnectSocket == INVALID_SOCKET) {
            printf("Socket failed with error: %d\n", WSAGetLastError());
            WSACleanup();
            exit(1);
        }

        iResult = connect(ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen);

        if (iResult == SOCKET_ERROR) {
            closesocket(ConnectSocket);
            ConnectSocket = INVALID_SOCKET;
            printf("The server is down... did not connect");
        }
    }

    freeaddrinfo(result);

    if (ConnectSocket == INVALID_SOCKET) {

        printf("Unable to connect to server!\n");
        WSACleanup();
        exit(1);
    }

    u_long iMode = 1;

    iResult = ioctlsocket(ConnectSocket, FIONBIO, &iMode);
    if (iResult == SOCKET_ERROR) {
        printf("ioctlsocket failed with error: %d\n", WSAGetLastError());
        Closesocket(ConnectSocket);
        WSACleanup();
        exit(1);
    }

    char value = 1;
    setsockopt(ConnectSocket, IPPROTO_TCP, TCP_NODELAY, &value, sizeof(value));
}