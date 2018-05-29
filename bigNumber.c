#include "stdio.h"
#include "string.h"
#include "stdlib.h"

#define BIT_MAX 1000
#define c_for_each(begin, end, array,type) \
                   for(int i=(begin); i<(end); ++i) printf(type,array[i]);
char* multi(char* s){
    int bit,pointBit,j,tempLen,result[BIT_MAX],improve;
    char resultStr[BIT_MAX];
    int len =strlen(s);
    int splitNum[len],count[len];
    char temp[1];
    for(int i=0;i<len;i++){
        if(s[i] =='.'){
            j = len-i-1;
            while(j--){
                pointBit *= 10;
            }
            continue;
        }
        temp[0] =s[i];
        splitNum[tempLen++] = atoi(temp);
    }
    c_for_each(0,bit,splitNum,"%d");
    for(int i=tempLen;i>0;i--){
        bit = tempLen-i;
        for(int m=tempLen;m>0;m--){
           result[bit++] += splitNum[i-1]*splitNum[m-1];
        }
    }
    c_for_each(0,bit,result,"%d");
    printf("resultstr:\n");
    printf("%d\n",bit);
    improve = 0;
    for(int i=bit;i>0;i--){
        result[i-1] += improve;
        improve = result[i-1]/10;
        sprintf(temp,"%d",result[i-1]%10);
        resultStr[i-1] = temp[0];
    }
    char aa[1000];
    if(improve){
        sprintf(aa,"%d",improve);
        strcat(aa,resultStr);
        strcpy(resultStr,aa);
    }
    c_for_each(0,bit+1,resultStr,"%c");


    return s;
}
int main(){
    char s[7] ;
    int n;
    // while(scanf("%s%d",s,&n)==2){
    //     printf("%s",s);
    //     printf("%d",n);

    // }
    strcpy(s,"331");
    multi(s);
}
