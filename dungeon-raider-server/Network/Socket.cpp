#include "Network/Socket.h"

#include <netinet/in.h>

namespace raider
{
	Socket::Socket()
	{
		mSockFd = socket(AF_INET, SOCK_DGRAM, IPPROTO_TCP);
		if (!mSockFd) {
			throw "Failed to open socket!  This is not good.";
		}
	}
	
	Socket::~Socket()
	{
		shutdown(mSockFd);
	}

	
}