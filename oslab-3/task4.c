#include <stdio.h>
#include <unistd.h>

void main(){
int id;
int fd[2];
int arr[]={2,5,7,80,90,104};
pipe(fd);
int len=sizeof(arr)/sizeof(arr[0]);
int half=len/2;
id=fork();
if(id==0){
int sum=0;
for(int i=0;i<=half-1;i++){
sum=sum+arr[i];
}
close(fd[0]);
write(fd[1],&sum,sizeof(sum));
close(fd[1]);
}
else{
int valuefromChild=0;
read(fd[0],&valuefromChild,sizeof(valuefromChild));
int sum=valuefromChild;
for(int i=half;i<=len-1;i++){
sum=sum+arr[i];
}
printf("SUM:%d",sum);
}
}
