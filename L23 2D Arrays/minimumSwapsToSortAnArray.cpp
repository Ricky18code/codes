#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSwap(vector<int> nums , int n){
    vector<pair<int,int>> temp(n);
    int swapCount = 0;

    for(int i=0 ; i<n ; i++){
        temp[i] = {nums[i], i};
    }

    sort(temp.begin(), temp.end());

    int j = 0;
    while(j < n){
        if(temp[j].second != j){
            int correctIndex = temp[j].second;

            if(temp[correctIndex].second == j){
                j++;
                continue;
            }

            swap(temp[j], temp[correctIndex]);
            swapCount++;
        } else {
            j++;
        }
    }

    return swapCount;
}

int main(){
    vector<int> nums = {2,3,4,2,1};
    cout << minSwap(nums, 5);
    return 0;
}
