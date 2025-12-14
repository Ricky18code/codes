#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char word[50];
    cin>>word;
    int n = strlen(word);
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(word[start],word[end]);
        start++;
        end--;
    }
    cout<<word;
    return 0;
}
