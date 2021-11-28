#include<stdio.h>

void main(){

int number;
printf("ENTER NUMBER INPUT:");
scanf("%d",&number);
for(int i=1;i<=10;i++){
printf("%d*%d=%d \n",i,number,i*number);
}
}
