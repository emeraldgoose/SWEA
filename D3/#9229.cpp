// 9229. 한빈이와 Spot Mart
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int testCase;
    cin>>testCase;
    for(int a=1;a<=testCase;a++) {
    	int N, M;
        cin>>N>>M;
        int* list = new int[N];
        for(int i=0;i<N;i++) cin>>list[i];
        vector<int> v;
        for(int i=0;i<N-1;i++) {
            for(int j=i+1;j<N;j++) {
                if(list[i]>M || list[j]>M) continue;
                else if((list[i]+list[j])<=M)  v.push_back(list[i]+list[j]);
            }
        }
        int max=0;
        for(int i=0;i<v.size();i++) {
            if(v[i]>=max) max=v[i];
        } 
        if(max==0) cout<<"#"<<a<<" -1"<<endl;
        else cout<<"#"<<a<<" "<<max<<endl;
        delete[] list;
    }
    return 0;
}
