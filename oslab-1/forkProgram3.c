#include <stdio.h>
#include <unistd.h>

      pid_t pid;

      void main(){
       int output=fork();
       fork();
       fork();
       pid=getpid();
       if(output==0){
        printf("\n Called From Child With Process ID %d \n",pid);
       }
       else{
        printf("\n Called From Parent With Process ID %d \n",pid);
      }
    }
