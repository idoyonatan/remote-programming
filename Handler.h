#ifndef HANDLER_H_
#define HANDLER_H_
#include "Server.h"
using namespace std;
class Handler{
	public:
		void ctor(int socket);
		string recive();
		void send(string buf);
		void handle();
		
	private:
		int soc;	
};

#endif /* HANDLER_H_ */
