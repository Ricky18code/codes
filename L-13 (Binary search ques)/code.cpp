#include <iostream>
#include <vector>
using namespace std;

int ans1 = -1;
int ans2 = -1;
void firstOcc(vector<int> arr , int size , int key){
    int start = 0 ;
    int end = size - 1;
    int mid = start +(end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans1 = mid;
            end = mid - 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
}

void lastOcc(vector<int> arr , int size , int key){
    int start = 0 ;
    int end = size - 1;
    int mid = start +(end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans2 = mid;
            start = mid + 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
}

int main(){
    //This code is for the condition that the key will always exist in the array
    vector<int> arr = {1,2,3,3,3,3,3,3,3,4,5};
    firstOcc(arr , 11 , 3);
    lastOcc(arr , 11 , 3);
    int noOfOcc = (ans2 - ans1) + 1;
    cout<<"Number of occurence is "<<noOfOcc<<endl;
    return 0;
}