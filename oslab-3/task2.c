#include<stdio.h>
#include<unistd.h>

void main(){

int id;
int fd[2];

pipe(fd);

id=fork();
if(id==0){
int value=5;
printf("CHILD PROCESS\n");
close(fd[0]);
write(fd[1],&value,sizeof(value));
close(fd[1]);
}
else{
int valuefromChild=0;
printf("PARENT PROCESS\n");
read(fd[0],&valuefromChild,sizeof(valuefromChild));
printf("%d",valuefromChild);
}

}
