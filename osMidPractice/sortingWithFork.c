//Program to sort Array in child and print in parent
//using pipe() and fork()

#include <stdio.h>
#include <unistd.h>

void main(){

int arr[]={1,54,23,12,2};
int len=sizeof(arr)/sizeof(arr[0]);
int half=len/2;
int fd[2];
pipe(fd);

int id=fork();
if(id==0){

printf("Child Process \n");

for(int i=0;i<len-1;i++){
    for(int j=0;j<len-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=0;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
close(fd[0]);
write(fd[1],&arr,sizeof(arr));
close(fd[1]);
}
else{
    wait();
    printf("Parent Process \n");
    read(fd[0],&arr,sizeof(arr));
    for(int i=0;i<len;i++){
    printf("%d - ",arr[i]);
    }
}
}
