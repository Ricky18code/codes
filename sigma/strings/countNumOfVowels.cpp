#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return true;
    }
    return false;

    //can also be written as return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    //this return statement check conditions. If true then directly return true and vice versa.
}

int numberOfVowels(string str1){
    int count_vowel = 0;
    for(int i=0 ; i<str1.length() ; i++){
        if(isVowel(str1[i])){
            count_vowel++;
        }
    }
    return count_vowel;
}

int main(){
    string str1;
    getline(cin , str1);
    cout<<numberOfVowels(str1);
    return 0;
}
