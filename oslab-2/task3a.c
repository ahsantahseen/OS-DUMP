#include<stdio.h>
#include<unistd.h>

	void main(){
	int output=fork();
	if(output==0){
	for(int i=1;i<=5;i++){
	printf("\n %d",i);
	}
	}
	else{
	wait();
	for(int i=6;i<=10;i++){
	printf("\n %d",i);
	}
	}
	}
