#include <stdio.h>
#include <unistd.h>
#include "timer.h"

void timer()
{
	short m=0,h=0,s=0;
	while(h<24)
	{
		s++;
		if(s == 60)
		{
			m++;
			s=0;
		}
		
		if(m ==60)
		{
			h++;
			m=0;
		}

		if(h == 24)
		{
			h = 0;
			m = 0;
			s = 0;
		}
		printf("\r%i : %i : %i", h,m,s);
		fflush(stdout);
		sleep(1);
	}
}
