#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char word [50];
    cin.getline(word , 50);
    cout<<"Your word is : "<<word<<endl;
    int n = strlen(word);
    for(int i=0 ; i<n ; i++){
        if(word[i]>='a' && word[i] <= 'z'){
            word[i] = word[i] - 'A' + 'a';
        }else{
            continue;
        }
    }
    cout<<"Updated form of word is : "<<word;
    return 0;
}
