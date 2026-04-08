#include <iostream>
using namespace std;
bool arraySorted(int* ptr , int n , int i){
    if(i == n-1){
        return true;
    }

    if(ptr[i] > ptr[i+1]){
        return false;
    }
    arraySorted(ptr , n , i+1);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    if(arraySorted(arr,5,0)){
        cout<<"SORTED";
    }else{
        cout<<"NOT SORTED";
    }
    return 0;
}
