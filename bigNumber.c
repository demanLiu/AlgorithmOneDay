#include "stdio.h"
#include "string.h"
#include "stdlib.h"

#define BIT_MAX 1000
#define c_for_each(begin, end, array,type) \
                   for(int i=(begin); i<(end); ++i) printf(type,array[i]);
char* multi(char* s){
    int bit=0,pointBit=0,tempLen=0,result[BIT_MAX]={0},improve;
    char resultStr[BIT_MAX];
    int len =strlen(s);
    int splitNum[len];
    char temp[1];
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
    improve = 0;
    char tt[1];
    for(int i=0;i<bit;i++){
        result[i] += improve;
        improve = result[i]/10;
        sprintf(temp,"%d",result[i]%10);
        tt[0] = temp[0];
        resultStr[i] = tt[0];
    }
    if(improve){
        sprintf(temp,"%d",improve);
        resultStr[bit] = temp[0];
    }
    pointBit *=2;
    for(int i=bit;i>=0;i--){
        if(i == pointBit-1){
            putchar('.');
        }
        printf("%c",resultStr[i]);
    }

    return s;
}
int main(){
    char s[7] ;
    // int n;
    // while(scanf("%s%d",s,&n)==2){
    //     printf("%s",s);
    //     printf("%d",n);

    // }
    strcpy(s,"33.1");
    multi(s);
}
