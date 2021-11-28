#include<stdio.h>
#include<unistd.h>

void main(){
int output=fork();
if(output==0){
for(int i=0;i<5;i++){
printf("Printed from child %d \n",getpid());
}
}
else{
for(int i=0;i<5;i++){
printf("Printed from parent %d \n",getpid());
}
}
}
