#include<vector>
#include<iostream>
using namespace std;  
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

main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int target = 7;
    cout<<search(nums, target)<<endl;
}