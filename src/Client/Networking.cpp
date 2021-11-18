//
// Created by Jeuio on 18.11.2021.
//


#include "Networking.h"



int NetworkServices::sendMessage(SOCKET curSocket, const char *message, int messageSize) {

    return send(curSocket, message, messageSize, 0);
}



int NetworkServices::receiveMessage(SOCKET curSocket, char *buffer, int bufferSize) {

    return recv(curSocket, buffer, bufferSize, 0);
}