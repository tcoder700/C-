#include <iostream>
using namespace std;

int main() {
    int t,n1,n2,n3;
    cin>>t;
    while(t--){
        cin>>n1>>n2>>n3;
        if(n1>(n2+n3) || n2>(n1+n3) || n3>(n1+n2)){
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;
    }
	return 0;
}
