#include<stdio.h>
#include<unistd.h>

	void main(){
	int output=fork();
	int j;
	if(output==0){
	j=1;
	}
	else{
	wait();
	j=6;
	}
	for(int i=j;i<5+j;i++){
	printf("Printed from %d , %d \n",getpid(),i);
	}
	}
