#pragma once

#include "Globals.h"

#include <sys/socket.h>

namespace raider
{
	class Socket
	{
	public:
		Socket();
		~Socket();
		
	private:
		int32_t mSockFd;
	};
};
