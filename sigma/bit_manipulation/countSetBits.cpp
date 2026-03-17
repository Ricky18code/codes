#include <iostream>
using namespace std;
int countSetBits(int num){
    int count = 0;
    while(num > 0){
        int lastDigit = num & 1; //to find the last digit of the number
        count += lastDigit; //if last digit is '1' then it adds in count and if its '0' then it adds in count but does not effect it.
        num = num >> 1;
    }
    return count;
}
int main(){
    int num = -1;
    cout<<countSetBits(num);
    return 0;
}
