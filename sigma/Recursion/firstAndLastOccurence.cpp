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
    return firstOccurence(vec , n , i+1 , num);
}
int lastOccurence(vector<int>& vec,int i, int num){
    if(i < 0){
        return -1;
    }
    if(vec[i] == num){
        return i;
    }
    return lastOccurence(vec, i-1 , num);
}
int main(){
    vector<int> vec = {1,2,3,4,4,4,4,4,4,5,3};
    cout<<firstOccurence(vec , vec.size() , 0 , 10);
    cout<<lastOccurence(vec , vec.size()-1 , 4);
    return 0;
}
