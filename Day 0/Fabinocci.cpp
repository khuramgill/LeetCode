#include<iostream>
using namespace std;
// 
main(){
    // Range of int is -2^31 to 2^31-1
    //fabinocci series generater code
    int n;
    cin>>n;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    cout<<endl;
    
}