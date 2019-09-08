// 6718. 희성이의 원근법
#include <iostream>
#include <cstdio>
#include <cstring>
int main() {
    int testCase, a;
    scanf("%d",&testCase);
    for(a=1;a<=testCase;a++) {
        char str[8];
        scanf("%s",str);
        int tr, len=strlen(str);
        printf("#%d ",a);
        if(len<3) tr=0;
        else if(len==3) tr=1;
        else if(len==4) tr=2;
        else if(len==5) tr=3;
        else if(len==6) tr=4;
        else tr=5;
        printf("%d\n",tr);
    }
    return 0;
}