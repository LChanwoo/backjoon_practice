#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

string s,bomb, ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> s >> bomb;
    for(char c : s){
        ans+=c;
        if(ans.size()>=bomb.size() && ans.substr(ans.size()-bomb.size(), bomb.size())==bomb ){
            ans.erase(ans.size()-bomb.size(), bomb.size());
        }
    }
    if(ans.size()==0){
        cout << "FRULA";
    }else{
        cout << ans;
    }
    return 0;
}