#include<stdio.h>
#include<unistd.h>

	void main(){
	int output=fork();
	int age;
	int num1;
	int num2;
	if(output==0){
	printf("\n Enter Age:");
	scanf("%d",&age);
	if(age>18){
	printf("\n Age is above 18");
	}
	else{
	printf("\n Age is below 18");
	}
	}
	else{
	wait();
	printf("\n Enter Number 1:");
	scanf("%d",&num1);
	printf("\n Enter Number 2:");
	scanf("%d",&num2);
	printf("\n Sum=%d \n",num1+num2);
	}
	}
