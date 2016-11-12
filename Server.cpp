/*
 * Server.cpp
 *
 *  Created on: Oct 12, 2016
 *      Author: ido
 */

#include "Server.h"
void Server::ctor()
{
    socklen_t clilen;
    struct sockaddr_in serv_addr, cli_addr;
    soc = socket(AF_INET, SOCK_STREAM, 0);
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(PORT);
    bind(soc, (struct sockaddr *) &serv_addr,sizeof(serv_addr));
    listen(soc,5);
    clilen = sizeof(cli_addr);
    clientS = accept(soc,(struct sockaddr *) &cli_addr,&clilen);
}
void Server::dtor()
{
    close(clientS);
    close(soc);
}
