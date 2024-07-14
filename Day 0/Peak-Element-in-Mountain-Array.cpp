#include <iostream>
#include <vector>
using namespace std;

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

int main() {
    vector<int> arr = {0,2,1,0};
    int result = peakIndexInMountainArray(arr);
    cout <<"Peak Element is: "<< result  << endl;
    return 0;
}