#include<stdio.h>
#include<string.h>

void main(){
    char mainStr[]="abcdefg";
    int mainStrlen=strlen(mainStr);
    char tempStr[mainStrlen];
    for(int i=0;i<mainStrlen;i++){
        tempStr[i]=mainStr[mainStrlen-i-1];
    }
    printf("%s",tempStr);
}