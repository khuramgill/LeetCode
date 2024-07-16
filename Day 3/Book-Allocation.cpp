#include<iostream>
#include<vector>
using namespace std;

bool isPossibleSol(vector<int> arr , int n , int m , int mid){
    int StdCount = 1;
    int PageSum = 0;

    for(int i = 0; i < arr.size();i++){
        if(PageSum + arr[i] <= mid){
            PageSum += arr[i];
        }
        else{
            StdCount++;
            if(StdCount > m || arr[i] > mid){
                return false;
            }
            PageSum = arr[i];
        }
    }
    return true;

}


int BookAllocation(vector<int> arr , int n, int m){
    int s = 0;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum = sum + arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s) / 2;
    while(s<=e){
        if(isPossibleSol(arr, n , m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
    }
    return ans;

}

// Saqure root function general implementation


main() {
    vector<int> arr = {12, 34, 67, 90};
    int n = 4;
    int m = 2;
    cout<<BookAllocation(arr, n, m);
    

}
