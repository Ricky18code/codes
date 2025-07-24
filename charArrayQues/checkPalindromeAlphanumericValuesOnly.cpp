#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
    int st = 0;
    int e = s.length()-1;
    while(st<e){
        while(st<e && !((s[st]>='a' && s[st] <= 'z') || (s[st] >= '0' && s[st] <= '9'))){
            st++;
        }
        while(st<e && !((s[e]>='a' && s[e] <= 'z') || (s[e] >= '0' && s[e] <= '9'))){
            e--;
        }
        if(s[st] != s[e]){
            return false;
        }else{
            st++;
            e--;
        }
    }
    return true;
}
