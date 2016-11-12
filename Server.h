/*
 * Server.h
 *
 *  Created on: Oct 14, 2016
 *      Author: ido
 */
#ifndef SERVER_H_
#define SERVER_H_
#include <iostream>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>


#define PORT 4949

using namespace std;
class Server{
	public:
		void ctor();
		void dtor();
		string reciveData();
		void sendData(string data);
		string* parser(string buffer);
		int soc, clientS;
};



#endif /* SERVER_H_ */

