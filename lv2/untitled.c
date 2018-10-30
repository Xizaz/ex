
#include <unistd.h>

void print(unsigned char octet)
{
	int i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}