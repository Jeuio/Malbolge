//
// Created by Jeuio on 18.11.2021.
//

//use this for reference: https://www.codeproject.com/Articles/412511/Simple-client-server-network-using-Cplusplus-and-W

#pragma once

#ifdef __WIN32__            //If Windows 32 is used
#   include <winsock2.h>    //Use the corresponding header for windows
#else                       //If another os is defined
#   include "sys/socket.h"  //Pray that the other header for networking exists
#endif

#include <Windows.h>
#include <ws2tcpip.h>
#include <stdio.h>      //@todo replace this, since it is deprecated
#include <map>



#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "6881"


//@todo figure out why this is here and how we fix it
#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")



class NetworkServices {

public:
    static int sendMessage(SOCKET curSocket, const char *message, int messageSize);
    static int receiveMessage(SOCKET curSocket, char *buffer, int bufferSize);
};





class ClientNetwork {

public:
    int iResult;

    SOCKET ConnectSocket;

    ClientNetwork();
    ~ClientNetwork();   //@todo add destructor instructions for ClientNetwork class
};





class ServerNetwork {

public:

    SOCKET listenSocket;

    SOCKET clientSocket;

    int iResult;

    std::map<unsigned int, SOCKET> sessions;

    ServerNetwork();
    ~ServerNetwork();   //@todo add destructor instructions for ServerNetwork class

    bool acceptNewClient(unsigned int &id);
};