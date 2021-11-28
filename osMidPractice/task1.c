//Count Special Character,Lower,Upper,Digits in a string

#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "abcd1223ABXC@#-9344";
    int sp=0;
    int lc=0;
    int uc=0;
    int dig=0;
    for(int i=0;i<strlen(str);i++){
        int asciiCode=("%3d",str[i]);
        if(asciiCode>=65&&asciiCode<=90){
            uc++;
        }
        else if(asciiCode>=97&&asciiCode<=122){
            lc++;
        }
        else if(asciiCode>=48&&asciiCode<=57){
            dig++;
        }
        else{
            sp++;
        }
    }
    printf("Special Chars: %d \n",sp);
    printf("Lowercase Chars: %d \n",lc);
    printf("Uppercase Chars: %d \n",uc);
    printf("Numbers: %d \n",dig);
}