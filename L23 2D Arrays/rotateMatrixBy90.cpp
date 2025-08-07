#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<vector<int>> arr){
    for(int i=0 ; i<arr.size() ; i++){
        for(int j=0 ; j<arr.size() ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}



vector<vector<int>> rotate(vector<vector<int>>& arr){
    int n = arr.size();


    //Taking transpose of the matrix
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }

    //reversing each row 
    for(int i=0 ; i<n ; i++){
        reverse(arr[i].begin() , arr[i].end());
    }
    return arr;
}

int main(){
    vector<vector<int>> arr = {{1,2,3} , {4,5,6} , {7,8,9}};
    printArray(rotate(arr));
    return 0;
}
