#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    int ans = 0;
    while(s<=e){
        int sqrt = mid*mid;
        if(sqrt == n){
            return mid;
        }
        else if(sqrt < n){
            s = mid + 1;
        }
        else{

            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int sqrt(int x) {
    return BinarySearch(x);
    // if (x == 0) return 0;
    // int left = 1, right = x;
    // while (true) {
    //     int mid = left + (right - left) / 2;
    //     if (mid > x / mid) {
    //         right = mid - 1;
    //     } else {
    //         if (mid + 1 > x / (mid + 1)) return mid;
    //         left = mid + 1;
    //     }
    // }
}
// Saqure root function general implementation
int sqrt1(int x){
    // not use of binary search
    if(x==0) return 0;
    for(int i=1;i<=x/i;i++){
        if(i<=x/i && (i+1)>x/(i+1)) return i;
    }
    return -1;
}

main() {
    int result = sqrt(4);
    cout << result << endl;
}