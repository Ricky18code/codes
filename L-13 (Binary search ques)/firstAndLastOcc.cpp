#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr , int size , int key){
    int ans = -1;
    int start = 0 ;
    int end = size - 1;
    int mid = start +(end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(vector<int> arr , int size , int key){
    int ans = -1;
    int start = 0 ;
    int end = size - 1;
    int mid = start +(end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,3,4,5};
    cout<<"First occurence of 3 is "<<firstOcc(arr , 6 , 3)<<endl;
    cout<<"Last occurence of 3 is "<<lastOcc(arr , 6 , 3)<<endl;
    return 0;
}
