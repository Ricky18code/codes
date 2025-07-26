#include <iostream>
#include <vector>
#include <string>
using namespace std;

char getMaximumOcc(string s) {
    int arr[26] = {0};

    for(int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);
        if(ch >= 'a' && ch <= 'z') {
            arr[ch - 'a']++;
        }
    }

    int maxIndex = 0;
    for(int i = 1; i < 26; i++) {
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex + 'a';
}

int main() {
    string s ; 
    cout<<"ENTER YOUR STRING : "<<endl;
    cin>>s;
    cout << getMaximumOcc(s) << endl;
}
