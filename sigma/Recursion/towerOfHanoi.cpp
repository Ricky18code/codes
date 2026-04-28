#include <iostream>
using namespace std;
void towerOfHanoi(int n , char source , char helper , char destination){
    if(n==1){
        cout<<source<<"->"<<destination<<endl;
        return;
    }
    towerOfHanoi(n-1 , source , destination , helper);
    cout<<source<<"->"<<destination<<endl;
    towerOfHanoi(n-1 , helper , source , destination);
}
int main(){
    towerOfHanoi(3 , 'A' , 'B' , 'C');
    return 0;
}
