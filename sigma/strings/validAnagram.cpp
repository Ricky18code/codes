#include<iostream>
#include <string>
using namespace std;
int main(){
    string str1 = "The eyes";
    string str2 = "They see";
    int arr1[26]={0};
    int arr2[26]={0};
    bool validAnagram = true;
    for(int i=0 ; i<str1.length() ; i++){
        arr1[str1[i]- 'a']++;
    }
    for(int i=0 ; i<str2.length() ; i++){
        arr2[str2[i]- 'a']++;
    }
    for(int i=0 ; i<26 ; i++){
        if(arr1[i] != arr2[i]){
            validAnagram = false;
            break;
        }
    }
    if(validAnagram){
        cout<<"ITS A VALID ANAGRAM"<<endl;
    }else{
        cout<<"NOT A VALID ANAGRAM"<<endl;
    }
    return 0;
}
