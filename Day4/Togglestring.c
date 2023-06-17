#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char S[1000];
    int i,l;
    scanf("%s",&S);
    l=strlen(S);
    for(i=0;i<l;i++){
        if(isupper(S[i])){
            printf("%c",tolower(S[i]));
        }else{
            printf("%c",toupper(S[i]));
        }
    }return 0;
    }