#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){

	Pid_t pid;

	/*fork another process*/
	pid = fork();
	if (pid<0)
	{  /*error occurred*/
		fprintf(stderr, "fork failed");
	exit(-1);
	}
	else if (pid==0)
	{ /*child process*/
		execlp("/bin/ls","ls",NULL);
	}
	else{ /*parent process*/

		/*parent will wait for the child to complete*/

		wait(NULL);

		printf("Child Complete\n");

		exit(0);
	}



	// Operating Systems study motivation:

	feeling tired;
	feeling sleepy;

	if (tired==true && sleepy==true)
	{
		drink.coffee();
		printf("Keep pushing it will end soon and be worth it.");
	}
	else
	{
		active("you are doing good champ keep pushing!!!");
	}



}