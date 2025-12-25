#include <iostream>
#include <string>
using namespace std;

bool oneSwap(string str1 , string str2){
    if(str1.length() != str2.length()){
        return false;
    }else{
        int diff = 0;
        char diffchar1 , diffchar2;
        for(int i=0 ; i<str1.length() ; i++){
            if(str1[i] != str2[i]){
                if(diff == 0){
                    diffchar1 = str1[i];
                    diffchar2 = str2[i];
                }else{
                    if(str1[i] != diffchar2 || str2[i] != diffchar1){
                        return false;
                    }
                }
                diff++;
            }
            if(diff > 2){
                return false;
            }
        }
        if(diff == 1){
            return false;
        }
    }
    return true;
}
int main(){
    string str1;
    getline(cin , str1);
    string str2;
    getline(cin , str2);
    if(oneSwap(str1,str2)){
        cout<<"ONE SWAP CAN FIX";
    }else{
        cout<<"CANNOT BE FIXED WITH ONE SWAP";
    }
}
