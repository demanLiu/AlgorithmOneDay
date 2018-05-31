#include "stdio.h"
#include "string.h"
#include "stdlib.h"

#define BIT_MAX 1000
char* square(char* s){
    int bit=0,pointBit=0,tempLen=0,result[BIT_MAX]={0},improve=0;
    char resultStr[BIT_MAX],temp[4];
    int len =strlen(s);
    int splitNum[len];
    for(int i=0;i<len;i++){
        splitNum[i]=0;
        if(s[i] =='.'){
            pointBit = len-i-1;
            continue;
        }
        temp[0] =s[i];
        splitNum[tempLen++] = atoi(temp);
    }
    for(int i=tempLen;i>0;i--){
        bit = tempLen-i;
        for(int m=tempLen;m>0;m--){
           result[bit++] += splitNum[i-1]*splitNum[m-1];
        }
    }
    for(int i=0;i<=bit;i++){
        if(i==bit&&improve ==0 ){
                bit--;
        }
        result[i] += improve;
        improve = result[i]/10;
        sprintf(temp,"%d",result[i]%10);
        resultStr[i] = temp[0];
    }
    pointBit *=2;
    for(int i=bit;i>=0;i--){
        if(i == pointBit-1){
            putchar('.');
        }
        putchar(resultStr[i]);
    }

    return s;
}
int main(){
    char s[10] ;
    while(scanf("%s",s)==1){
        square(s);
    }
}
