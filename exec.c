#include<stdio.h>
#include<unistd.h>
int main()
{
char* cmnd="ls";
char* argument[]={"ls","-1",NULL};
printf("before execvp()\n");
int status=execvp(cmnd,argument);
if (status==-1)
{
printf("terminated\n");
}
printf("done");
}
