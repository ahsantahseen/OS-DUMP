#include<stdio.h>
#include<unistd.h>

void main(){
 int outputTwo;
 int output=fork();
 if(output==0){
 for(int i=0;i<5;i++){
 printf("\n Printed from child %d",getpid());
 }
 }
 else{
 printf("\n Enter a number:");
 scanf("%d",&outputTwo);
 for(int i=0;i<5;i++){
 printf("\n Printed from parent %d",getpid());
 }
 }
}
