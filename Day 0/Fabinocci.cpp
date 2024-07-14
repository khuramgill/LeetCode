#include<iostream>
using namespace std;
// 
int peakIndexInMountainArray(vector<int>& arr) {
        int strt = 0;
        int end = arr.size() - 1;
        int mid = (strt + end)/2;
        while(strt<end){
            if(arr[mid] < arr[mid+1]){
                strt = mid+1;
            }
            else{
                end = mid;
            }
            mid = strt + (end-strt)/2;

        }
        return strt;
        
    }
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