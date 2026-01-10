#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
bool isMatch(char st , char s){
    if((st == '(' && s == ')') || (st == '[' && s == ']') || (st == '{' && s == '}')){
        return true;
    }
    return false;
}
bool validParanthesis(string s1){
    stack<char> st;
    if(s1.length()%2 != 0){
        return false;
    }
    for(int i=0 ; i<s1.length() ; i++){
        if((s1[i] == '(') || (s1[i] == '[') || (s1[i] == '{')){
            st.push(s1[i]);
        }else{
            if(st.empty()==true){
                return false;
            }else if(isMatch(st.top() , s1[i])){
                st.pop();
            }else{
                return false;
            }
        }
    }
    if(st.empty() == true){
        return true;
    }else{
        return false;
    }
    return true;
}
int main(){
    string s1 = "({[]})";
    if(validParanthesis(s1)){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
    return 0;
}
