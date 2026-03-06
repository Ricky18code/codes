#include <iostream>
using namespace std;
int main(){
    int val = 7;
    int update = 1;
    int ith_bit = 3;
    //clearing 
    val = val & (~(1<<ith_bit));
    //updating 0->1   1->0
    val = val | (update<<ith_bit);
    cout<< val;
    return 0;
}
