#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size();i++){
        if(s[i]=='P'){
            cnt++;
            continue;
        }
        if(cnt>=2 && s[i+1]=='P'){
            cnt--;
            i++;
        }
        else{
            cout << "NP";
            return 0;
        }
    }
    if(cnt==1){
        cout << "PPAP";
    }
    else{
        cout << "NP";
    }
}
