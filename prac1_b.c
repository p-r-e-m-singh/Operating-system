#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    int p;
    p = fork();
    if(p<0){
        fprintf(stderr,"fork failed");
		return 1;
    }
    else if (p==0)
    {
        execl("/bin/ls","ls\n",NULL);
    }
    else{
        printf("In parent process\n");
    }
    return 0;
    
    
}