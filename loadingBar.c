#include <stdio.h>
#include "loadingBar.h"

void loadingBar(int to, char about[])
{
	printf("%s [", about);
	printf("\033[0;31m");
	for(int i=0;i < to/2;i++)
	{
		printf("#");
	}
	for(int j = to/2;j<50;j++){
		printf(" ");
	}
	printf("\033[0m");
	printf(" %i%s ] ",to,"%");
	printf("\n");
}
