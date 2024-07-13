#include<vector>
#include<iostream>
using namespace std;  

// Basic Binary Search
int search(vector<int>& nums, int target)    
    { 
     int strt = 0;
        int end = nums.size() - 1;
        
        int mid = (strt + end)/2;

        while(strt<=end){
            if(target == nums[mid]){
                return mid;
            }
            if(nums[mid] < target ){
                strt = mid + 1;
            }
            else {
                end = mid - 1;
            }
            mid = (strt+end)/2;
        } 
        return -1;
    }

// First & Last Occurence of an element in a sorted array
int FirstOccurence(vector<int>& nums, int target)    
    { 
     int strt = 0;
        int end = nums.size() - 1;
        int ans = -1;
        int mid = (strt + end)/2;

        while(strt<=end){
          if(target == nums[mid]){
              ans = mid;
              end = mid - 1;
          }
          else if(nums[mid] < target ){
              strt = mid + 1;
          }
          else {
              end = mid - 1;
          }
          mid = (strt+end)/2;
        } 
        return ans;
    }
int LastOccurence(vector<int>& nums, int target)    
    { 
     int strt = 0;
        int end = nums.size() - 1;
        int ans = -1;
        int mid = (strt + end)/2;

        while(strt<=end){
          if(target == nums[mid]){
              ans = mid;
              strt = mid + 1;
          }
          else if(nums[mid] < target ){
              strt = mid + 1;
          }
          else {
              end = mid - 1;
          }
          mid = (strt+end)/2;
        } 
        return ans;
    }

// Total Occurence of an element in a sorted array
int TotalOccurence(vector<int>& nums , int target){
    int first = FirstOccurence(nums, target);
    int last = LastOccurence(nums, target);
    return last - first + 1;
}

main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    // int target = 7;
    // cout<<search(nums, target)<<endl;
    // repeated elements array
    vector<int> Arr = {1,2,3,4,5,5,5,6,6,7,7,7,7,8,9};
    cout<<"First Occurence of 7 is at index: "<<FirstOccurence(Arr, 7)<<endl;
    cout<<"Last  Occurence of 7 is at index: "<<LastOccurence(Arr, 7)<<endl;
    cout<<"Total Occurence of 7 is: "<<TotalOccurence(Arr, 7)<<endl;
}