#include<stdio.h>

void main(){

int arr[]={2,5,79,96};
int highest=arr[0];
int size=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<size;i++){
if(highest<arr[i]){
highest=arr[i];
}
}
printf("%d",highest);
}
