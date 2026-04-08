#include <iostream>
#include <vector>
using namespace std;
int firstOccurence(vector<int>& vec , int n ,int i, int num){
    if(i > n-1){
        return -1;
    }
    if(vec[i] == num){
        return i;
    }
    firstOccurence(vec , n , i+1 , num);
}
int main(){
    vector<int> vec = {1,2,3,4,4,5,3};
    cout<<firstOccurence(vec , vec.size() , 0 , 10);
    return 0;
}
