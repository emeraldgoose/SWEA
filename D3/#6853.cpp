// 6853. 직사각형과 점
#include <iostream>
using namespace std;
int main() {
    int testCase, q, i;
    cin>>testCase; cin.ignore(1,'\n');
    for(q=1;q<=testCase;q++) {
        int x1, x2, y1, y2, n;
        int inter=0, outer=0, edge=0;
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        for(i=0;i<n;i++) {
            int a=0, b=0;
            cin>>a>>b;
            if(a<x1 || a>x2 || b<y1 || b>y2) outer++;
            else if((a==x1 || a==x2) && b>=y1 && b<=y2) edge++;
            else if((b==y1 || b==y2) && a>=x1 && a<=x2) edge++;
            else inter++;
        }
        cout<<"#"<<q<<" "<<inter<<" "<<edge<<" "<<outer<<endl;
    }
    return 0;
}