#include <iostream>
using namespace std;
int main(){
    int val = 8;
    int bitmask = val - 1;
    if(!(val & bitmask)){
        cout<<"POWER OF 2";
    }else{
        cout<<"NOT POWER OF 2";
    }
    return 0;
}
