#include<stdio.h>
#include<unistd.h>

void main(){
int output=fork();
if(output==0){
printf("\n Called from child \n");
}
else{
printf("\n Called from parent \n");
}
}
