#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int testCase, a;
    cin>>testCase;
    for(a=1;a<=testCase;a++) {
        char arr1[15], arr2[15], arr3[15], arr4[15], arr5[15]; int i;
        memset(arr1,'[',15); memset(arr2,'[',15); memset(arr3,'[',15); memset(arr4,'[',15); memset(arr5,'[',15);
        // input
        cin>>arr1>>arr2>>arr3>>arr4>>arr5;
        // output
        cout<<"#"<<a<<" ";
        for(i=0;i<15;i++) {
            if(arr1[i]!='[' && arr1[i]!='\0') cout<<arr1[i];
            if(arr2[i]!='[' && arr2[i]!='\0') cout<<arr2[i];
            if(arr3[i]!='[' && arr3[i]!='\0') cout<<arr3[i];
            if(arr4[i]!='[' && arr4[i]!='\0') cout<<arr4[i];
            if(arr5[i]!='[' && arr5[i]!='\0') cout<<arr5[i];
        } cout<<endl;
    }
    return 0;
}