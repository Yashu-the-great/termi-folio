#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 

void loadingBar(int to, char about[])
{ 
	printf("%s [", about);
	for(int i =0;i < to/2;i++)
	{
		printf("#");
	}
	for(int j = to/2;j<50;j++)
	{
		printf(" ");
	}
	printf(" %i%s ] ", to,"%");
	printf("\n");
}

//*********************************************

int len(char *s) {
	int c = 0;
	while (s[c] != '\0')
	{
		c++;
	}   
	return c;
} 

//*********************************************

void main_pro(char *cmd)
{	
	if(strcmp(cmd,"name") == 0)
	{
		printf("\033[0;34m");
		printf("Yashu Maurya\n"); 
	}

	else if(strcmp(cmd,"exit") == 0)
	{
		printf("exiting...\n");
		exit(0);
	}

	else if(strcmp(cmd,"clear") == 0)
	{
		system("clear");
	}
	
	else if(strcmp(cmd,"about") == 0)
	{
		
		printf("Hello, I am Yashu Maurya,\nA Python, iOS and C Developer,\nA UI/UX Designer.\n\n\n");
		loadingBar(100,"Python");
		usleep(1000);
		loadingBar(90, "iOS");
		usleep(1000);
		loadingBar(60, "C");


	}
	else{
		printf("wrong input: dont know about '%s'\n", cmd);
	}
}

//********************************************

int main(int argc, char const *argv[])
{
	char cmd[100];
	system("figlet Welcome Mr. Maurya");
	while(1)
	{
		printf(">>> ");
		scanf("%s",cmd);
		main_pro(cmd);
		printf("\033[0m"); 
	}
	return 0;
}    
