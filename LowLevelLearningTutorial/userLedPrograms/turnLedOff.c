
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void turnLedOff(int file)
{
	write(file, "16,0", 4);
}

int main()
{
	int f = open("/proc/lll-gpio", O_RDWR);
	if(f == 0)
	{
		return -1;
	}

	turnLedOff(f);
	return 0;
}
