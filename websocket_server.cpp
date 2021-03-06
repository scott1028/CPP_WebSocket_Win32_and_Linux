/*
	base C++ WebSocket Server for GCC 3.3+ ( windows, centos )；GCC 3.4.5 ( Linux CCT-Linux 2.6.18v2 )

	compiler: 
		gcc websocket_server.cpp -lstdc++ -lpthread -Wall -o ws && ./ws.exe
		gcc websocket_server.cpp -lstdc++ -lpthread -Wall -o ws && ./ws

	Author: Scott
	
	note: Work for Cygwin、Centos 6.2
*/

#include <iostream>
#include "lib/libwebsocket.hpp"

using namespace std;
using namespace network;

int main(int argc, const char * argv[])
{
	int portNo=8888;
	Websocket app=Websocket(portNo);
	app.run();
	return 0;
}
