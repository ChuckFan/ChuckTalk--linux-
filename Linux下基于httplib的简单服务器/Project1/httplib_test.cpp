#include "httplib.h"
using namespace httplib;

void HelloWorld(const Request &req, Response &rsp)
{
	rsp.status = 302;//ÖØ¶¨Ïò
	rsp.set_header("Location", "");
	rsp.body = "<html><h1>Hello World</h4></html>";
	return;
}
int main()
{
	Server server;
	server.Get("/", HelloWorld);
	server.listen("0.0.0.0", 9000);
	return 0;
}
