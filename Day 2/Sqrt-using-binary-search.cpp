#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(int n){
    long long int s = 0, e = n, ans = 0;
    while (s <= e) {
        long long int mid = s + (e - s) / 2;
        long long int sqrt = mid * mid;

        if (sqrt == n) {
            return mid;
        }

        if (sqrt < n) {
            s = mid + 1;
            ans = mid;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int sqrt(int x) {
    long long int s = 0;
       long long int e = x;
        long long int ans = 0;
        while(s<=e){
        long long int mid = s + (e - s) / 2;
            long long int sqrt = mid * mid;
            mid = s + (e-s) / 2;
            if(sqrt == x){
                return mid;
            }
            if(sqrt < x){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
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
    int result = sqrt(8);
    cout << result << endl;
}