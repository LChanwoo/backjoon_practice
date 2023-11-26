#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

map<string, int> m;
int main(){
    int t, n;
    string s1, s2;
    cin >> t;
    while(t--){
        cin >> n;
        while(n--){
            cin >> s1 >> s2;
            m[s2]++;
        }
        int ans = 1;
        // (a+1)(b+1)(c+1)... - 1
        for(auto i : m){
            ans *= (i.second + 1);
        }
        // ans - 1 because we don't count the case where we don't wear anything
        cout << ans - 1 << '\n';
        m.clear();
    }
    return 0;
}