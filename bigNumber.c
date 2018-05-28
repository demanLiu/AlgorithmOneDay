#include "stdio.h"
#include "string.h"
#include "stdlib.h"


char* multi(char* s,int n){
    int bit;
    int len =strlen(s);
    char temp[1];
    for(int i=0;i<len;i++){
        temp[0] = s[i];
        bit = atoi(temp);
        // if(s[i] =='.'){
        //     continue;
        // }
        printf("%d\n",bit);
    }
    return s;
}
int main(){
    char s[7] ;
    int n;
    // while(scanf("%s%d",s,&n)==2){
    //     printf("%s",s);
    //     printf("%d",n);

    // }
    strcpy(s,"88.999");
    multi(s,4);
}
