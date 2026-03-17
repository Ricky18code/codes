#include <iostream>
using namespace std;

int fastExpo(int num , int n){ // this is log(n) complexity method of finding (x)^n
    int ans = 1;
    while(n > 0){
        int lastDig = n & 1;
        if(lastDig){
            ans *= num;
        }
        num *= num;
        n = n >> 1;
    }
    return ans;
}
int main(){
    cout<<fastExpo(3,5);
    return 0;
}
