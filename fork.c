#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid = fork();
	if(pid == -1){
		printf("Failed to create a new process");
		return 1;
	}
	else if(pid == 0){
		printf("child process : PID = %d, PPID = %d", getpid(), getppid());
	}else{
		printf("parent process : PID = %d, PPID = %d, child PID = %d", getpid(), getppid(), pid);
	}
	return 0;
}
