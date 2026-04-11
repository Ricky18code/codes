#include <iostream>
using namespace std;

int tilingProblem(int n){
    if(n==1 || n ==0){
        return 1;
    }
    //vertically placement
    int Vways = tilingProblem(n-1);

    //horizontally placement
    int Hways = tilingProblem(n-2);

    return Vways + Hways;
}
int main(){
    cout<<tilingProblem(4);
    return 0;
}
