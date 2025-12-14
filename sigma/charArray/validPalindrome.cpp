#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char word[] , int n){
    int st = 0 , end = n-1;
    while(st < end){
        if(word[st] == word[end]){
            st++;
            end--;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    char word[50];
    cin>>word;
    int n = strlen(word);
    cout<<palindrome(word , n);
}
