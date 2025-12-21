#include<iostream>
#include <string>
using namespace std;
int main(){
    string str1 = "car";
    string str2 = "rat";
    int arr1[26]={0};
    bool validAnagram = true;
    for(int i=0 ; i<str1.length() ; i++){
        arr1[str1[i]- 'a']++;
    }
    for(int i=0 ; i<str2.length() ; i++){
        if(--arr1[str2[i]-'a'] < 0){  //decrements the frequency in the same array to check wheter the character occur more or less time in the second string. Less than 0 means character occur more time in str2 and vice versa.
            validAnagram = false;
            break;
        }else{
            continue;
        }
    }
    if(validAnagram){
        cout<<"VALID ANAGRAM";
    }else{
        cout<<"NOT A VALID ANAGRAM";
    }
    return 0;
}
