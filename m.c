#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "loadingBar.h"
#include "timer.h" 

//global variables declared here//

char *ty = ">>>";

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

void changeToLower(char *c)
{
	int n = 0;
	for(int i = 0;i < strlen(c);i++)
	{
		n = (int) c[i];
		if(c[i] == 'a')
		{
			continue;
		}
		else if(n >= 65 && n <= 97)
		{
			c[i] = c[i] + (26+6);
		}
		n = 0;
	}
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
	else if(strcmp(cmd,"timer") == 0)
	{
		printf("Starting the timer.......\n");
		timer();
	}
	else if(strcmp(cmd,"zsh") == 0)
	{
		ty = "~$/";
	}
	else if(strcmp(cmd,"bash") == 0){
		ty = ">>>";
	}	
	else{
		printf("wrong input: dont know about '%s'\n", cmd);
	}
}

//********************************************

int main(int argc, char const *argv[])
{
	char cmd[100] = "";
	system("figlet Welcome Mr. Maurya");
	
	while(1)
	{
		printf("%s ", ty);
		scanf("%s",cmd);
		changeToLower(cmd);
		main_pro(cmd);
		printf("\033[0m"); 
	}
	return 0;
}    

