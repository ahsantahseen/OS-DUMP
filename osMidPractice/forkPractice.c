#include<stdio.h>
#include<unistd.h>
pid_t pid;
void main(){

// int output=fork();
// pid=getpid();
// if(output==0){
// printf("Child hello World-> pid %d \n ",pid);
// }
// else{
// printf("Parent hello World-> pid %d \n ",pid);
// }

for(int i=1;i<5;i++){
    fork();
}
    printf("\n 1");

}