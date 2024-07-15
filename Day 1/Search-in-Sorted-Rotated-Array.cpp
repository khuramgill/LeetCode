#include <vector>
#include<iostream>
using namespace std;

int Pivot(vector<int>& arr, int e){
    int s = 0;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int BinarySearch(vector<int>& arr, int s ,int e , int key){
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int SearchInSortedRotatedArray(vector<int>& arr, int key){
    int e = arr.size()-1;
    int pivot = Pivot(arr,e);
    if(arr[pivot] == key){
        return pivot;
    }
    if(arr[pivot] <= key && key <= arr[e]){
        return BinarySearch(arr,pivot,e,key);
    }
    else{
        return BinarySearch(arr,0,pivot-1,key);
    }
}

main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int key = 1;
    int result = SearchInSortedRotatedArray(arr,key);
    cout<<"Index of key is: "<<result<<endl;
}