// 4751. 다솔이의 다이아몬드 장식
#include <iostream>
#include <cstring>
using namespace std;
int main () {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        int i;
        string str;
        cin>>str;
        // 1번째 줄
        cout<<".";
        for(i=0;i<str.length();i++)
            cout<<".#..";
        cout<<endl;
        //2번째 줄
        cout<<".";
        for(i=0;i<str.length()*2;i++)
            cout<<"#.";
        cout<<endl;
        // 3번째 줄
        cout<<"#";
        for(i=0;i<str.length();i++) {
        	cout<<"."<<str.at(i)<<"."<<"#";
        }
        cout<<endl;
        //4번째 줄
        cout<<".";
        for(i=0;i<str.length()*2;i++)
        cout<<"#.";
        cout<<endl;
        //5번째 줄
        cout<<".";
        for(i=0;i<str.length();i++)
        cout<<".#..";
        cout<<endl;
    }
    return 0;
}