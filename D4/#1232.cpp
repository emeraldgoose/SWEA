// 1232. [S/W 문제해결 기본] 9일차 - 사칙연산
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
struct node{
    int value;
    int left;
    int right;
};
node node[1001];
int calc(int n) {
    if(node[n].value>0) return node[n].value;
    int leftside = node[n].left, rightside = node[n].right;
    if(node[n].value==-1) return calc(leftside)+calc(rightside);
    else if(node[n].value==-2) return calc(leftside)-calc(rightside);
    else if(node[n].value==-3) return calc(leftside)*calc(rightside);
    else return calc(leftside)/calc(rightside);
    return 0;
}
bool is_digit(string p) {
    return (atoi(p.c_str()) || p.compare("0") == 0);
}
int main() {
    int tc;
    for(tc=1;tc<=10;tc++) {
    	int N;
        cin>>N;
        int key; char ch;
        for(int i=1;i<=N;i++) {
            string ch;
            cin>>key>>ch;
            if(is_digit(ch)) node[key].value = atoi(ch.c_str());
            else {
                if(ch.compare("+")==0) node[key].value = -1;
                else if(ch.compare("-")==0) node[key].value = -2;
                else if(ch.compare("*")==0) node[key].value = -3;
                else node[key].value = -4;
                int leftKey, rightKey;
                cin>>leftKey>>rightKey;
                node[i].left=leftKey;
                node[i].right=rightKey;
            }
        }
        cout<<"#"<<tc<<" "<<calc(1)<<endl;
    }
    return 0;
}