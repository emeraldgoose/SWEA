// 1230. [S/W 문제해결 기본] 8일차 - 암호문3
#include <iostream>
#include <list>
using namespace std;
int main() {
    int a;
    for(a=1;a<=10;a++) {
		list<int> lst;
		int n, i, j, s;
		cin >> n;	// 원본 암호문
		for (i = 0; i < n; i++) {
			cin >> s;
			lst.push_back(s);
		}
		list<int>::iterator iter;
		cin >> n;	// 수정 명령어
		char ch; int x, y;
		for (i = 0; i < n; i++) {
			iter = lst.begin();
			cin >> ch;
			if (ch == 'I') {
                cin>>x>>y;
				for(j=0;j<x;j++) iter++;
				for (j = 0; j < y; j++) {
					cin >> s;
					lst.insert(iter, s);
				}
			}
            else if (ch=='A') {
                cin>>y;
                for(j=0;j<y;j++) {
                    cin>>s;
                    lst.push_back(s);
                }
            }
            else {
                cin>>x>>y;
            	for(j=0;j<x;j++) iter++;
                for(j=0;j<y;j++) lst.erase(iter++);
            }
		}
        cout<<"#"<<a<<" ";
		iter = lst.begin();
		for (i = 0; i < 10; i++) {
			cout << *iter << " ";
			iter++;
		}
        cout<<endl;
    }
	return 0;
}