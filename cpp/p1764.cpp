#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<string, int> mp;
vector<string> ans;
int main(){
    int n, m;
    cin >> n >> m;


    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s] = 1;
    }
    for(int i=0; i<m; i++){
        cin >> s;
        if(mp[s] == 1){
            ans.push_back(s);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << '\n';
    }
}