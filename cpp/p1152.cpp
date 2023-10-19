#include <iostream>

using namespace std;
int main(){
    string word;
    int count =0;
    getline(cin, word);

    for(int i=0;i<word.length();i++){
        if(word[i]==' ')count++;
    }

    if(word[word.length()-1]==' ') count--; 
    if(word[0]==' ') count--;
    cout << count+1;

    return 0;
}