#include <iostream>
using namespace std;
int main(){
    int val = 6;
    int ith_bit = 1;
    int bitmask = 1 << ith_bit;
    cout<< (val & (~bitmask));
    return 0;
}
