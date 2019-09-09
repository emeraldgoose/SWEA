// 3750. Digit sum
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int f(long long num) {
    if(num==0) return 0;
    num=num%10 + f(num/10);
    if(num>9) f(num);
    else return num;
}
int main() {
    int testCase, a;
    scanf("%d",&testCase);
    for(a=1;a<=testCase;a++) {
        char str[20];
        scanf("%s",str);
        long long n=0;
        for(int i=0;i<strlen(str);i++) n+=str[i]-'0';
        printf("#%d %d\n",a,f(n));
    }
    return 0;
}