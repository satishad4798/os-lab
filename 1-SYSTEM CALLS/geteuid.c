#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
void main()
{
        if(fork()==0)
                printf("my name\n");
	else{
int t=geteuid();

printf("%d",t);}
}

