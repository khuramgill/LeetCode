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

// advanced Binary Search
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

main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    // int target = 7;
    // cout<<search(nums, target)<<endl;
    // repeated elements array
    vector<int> nums1 = {1,2,3,4,5,5,5,6,6,7,7,7,7,8,9};
    cout<<FirstOccurence(nums1, 7)<<endl;
}