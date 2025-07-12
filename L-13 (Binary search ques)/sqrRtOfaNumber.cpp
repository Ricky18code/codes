#include <iostream>
#include <vector>
using namespace std;
int s = 0;
int e = n;
int ans;
if(n == 0 || n == 1){
    return n;
}
while(s<=e){
    int mid = s + (e-s)/2;
    if(mid == n / mid){
        return mid;
    }
    if(mid > n / mid){
        e = mid - 1;
    }else{
        ans = mid;
        s = mid + 1;
     }
}
return ans;
