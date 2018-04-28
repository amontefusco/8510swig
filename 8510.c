#include <string.h>  // for memset prototype
#include "8510.h"

int send_frame (unsigned len, char *buf)
{
	if (len > 0) return len;
	else return -1;
}
int recv_frame (unsigned len, char *buf)
{
	memset(buf, 0, len);
	return len;
}
