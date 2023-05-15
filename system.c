#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h>
int main() 
{ 
    fork(); 
    printf("Hello world!\n");  
    printf("%d\n",getpid());
    printf("%d\n",getppid());
    return 0; 
} 
