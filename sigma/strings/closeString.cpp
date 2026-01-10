#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool closeStrings(string s1 , string s2){
    int freq1[26] = {0};
    int freq2[26] = {0};
    if(s1.length() != s2.length()){
        return false;
    }
    for(int i=0 ; i<s1.length() ; i++){
        freq1[s1[i] - 'a']++;
    }
    for(int i=0 ; i<s2.length() ; i++){
        freq2[s2[i] - 'a']++;
    }
    for(int i=0 ; i<s1.length() ; i++){
        if((freq1[i] == 0) != (freq2[i] == 0)){
            return false;
        }
    }
    sort(freq1 , freq1 + 26);
    sort(freq2 , freq2 + 26);
    for(int i=0 ; i<s1.length() ; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string s1 = "aacabb";
    string s2 = "bbcbaa";
    if(closeStrings(s1,s2)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
    return 0;
}
