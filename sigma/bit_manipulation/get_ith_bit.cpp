#include <iostream>
using namespace std;
int main(){
    int val = 15;
    int ith_bit = 4;
    int bitmask = 1 << ith_bit;
    if(!(val & bitmask)){
        cout<<"0";
    }else{
        cout<<"1";
    }
    return 0;
}
