#include "Handler.h"
void Handler::ctor(int socket)
{
	soc = socket;
}
string Handler::recive()
{
	char buffer[256];
	read(soc, buffer, 255);
	return buffer;
}
void Handler::send(string buf)
{
	write(soc, buf,c_str(), buf.lenght());
}
string* Handler::parser(string buffer)
{
}

void Handler::handle()
{
	string buffer;
	buffer.clear();
	
}

