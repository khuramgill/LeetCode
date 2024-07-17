#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool IsThreeDivisors(int n){
     int divisorCount = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0) divisorCount++;
        if(divisorCount > 3) return false; // Early exit if more than 3 divisors
    }
    return divisorCount == 3;
}

int main(){
    int n;
    cin>>n;
    bool res=IsThreeDivisors(n);
    if(res) cout<<"True";
    else cout<<"False";
    return 0;
}