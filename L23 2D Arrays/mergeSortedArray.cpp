#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArray(vector<int>& nums1 , int m , vector<int>& nums2 , int n){
    vector<int> ans(m+n);
    int index = m + n - 1;
    int i = m-1 , j = n-1;
    while(i>=0 && j>=0){
        if(nums1[i] > nums2[j]){
            ans[index] = nums1[i];
            i--;
            index--;
        }else{
            ans[index] = nums2[j];
            j--;
            index--;
        }
    }
    while(i>=0){
        ans[index] = nums1[i];
        i--;
        index--;
    }
    while(j>=0){
        ans[index] = nums2[j];
        j--;
        index--;
    }
    for(int p=0 ; p<ans.size() ; p++){
        cout<<ans[p]<<" ";
    }
}

int main(){
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,5,6};
    mergeSortedArray(nums1 , 3 , nums2 , 3);
    return 0;
}
