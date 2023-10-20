#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    int N ;
    cin >> N;
    int resultCount =0;
    for(int i=0;i<N;i++){
        set<char> s;
        string str;
        cin >> str;
        int checkCount=0;
        for(int j=0;j<str.length();j++){
            if(s.count(str[j])>0){
                if(str[j-1]==str[j]){
                    checkCount++;
                }else{
                    break;
                }
            }else{
                checkCount++;
                s.insert(str[j]);
            }
        }
        if(str.length()==checkCount)resultCount++;
    }
    cout << resultCount;
    return 0;
}