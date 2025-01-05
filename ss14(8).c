#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello world";
    int i=0;
    while( i>-1){
        if(str[i]!=' '){
            str[i]-=32;
            break;
        }
        i++;
    }
    printf("%s",str);
    return 0;
}
