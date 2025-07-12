#include <iostream>
#include <vector>
using namespace std;

//Function to get pivot value
int getPivot(vector<int>arr , int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while(s<e){
        if(arr[0] <= arr[mid]){
            s = mid + 1;
        }else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
//Function to perform binary search
int binarySearch(vector<int>& arr , int s , int e , int k){
        int start = s;
        int end = e;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == k){
                return mid;
            }
            if(arr[mid] < k){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
int search(vector<int>& arr, int k) {
        int n = arr.size();
        int pivot = getPivot(arr,n);

        if(arr[pivot] <= k && k <= arr[n-1]){
            return binarySearch(arr,pivot,n-1,k);
        }
         else{
            return binarySearch(arr,0,pivot-1,k);
        }
    }
