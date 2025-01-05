#include<stdio.h>
#include<string.h>
int main(){
    int chu=0,so=0,dbiet=0;
    char str[]="Hello my gmail is test123@gmail.com";
    int i;
    for( i=0;i<strlen(str);i++){
    if((str[i]>=65 && str[i]<=90)||str[i]>=97 && str[i]<=122){
         chu++;
        }else if(str[i]>=48 && str[i]<=57){
            so++;
        }else{
            dbiet++;
        }
    }
    printf("so luong chu cai %d\n",chu);
    printf("so luong so %d\n",so);
    printf("so luong dac biet %d",dbiet);
    return 0;
}
