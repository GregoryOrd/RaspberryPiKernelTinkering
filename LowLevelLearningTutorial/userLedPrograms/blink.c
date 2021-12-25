
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void turnLedOn(int file)
{
	write(file, "16,1", 4);
}

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

	while(1)
	{
		turnLedOff(f);
		usleep(500000);
		turnLedOn(f);
		usleep(500000);
	}
}
