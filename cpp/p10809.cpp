#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[26];
    for(int i =0;i < 26;i++){
        arr[i]=-1;
    }
    string s;
    cin >> s;
    for(int i=0; i<s.length();i++){
        int x = s[i] - 97;
        if(arr[x] ==-1) arr[x] = s.find(s[i],0) ;
    }
    for(int i =0;i < 26;i++){
        cout << arr[i] << " ";
    }
    return 0;
    
}