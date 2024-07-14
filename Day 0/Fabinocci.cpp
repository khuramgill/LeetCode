#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate

using namespace std;

int pivotIndex(vector<int>& nums) {
    int total_sum = accumulate(nums.begin(), nums.end(), 0);
    int left_sum = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        if (left_sum == total_sum - left_sum - nums[i]) {
            return i;
        }
        left_sum += nums[i];
        // cout << "Left Sum: " << left_sum << endl;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 7, 3, 6, 5, 6};
    int result = pivotIndex(arr);
    cout << "Pivot Index is: " << result << endl;
    return 0;
}
