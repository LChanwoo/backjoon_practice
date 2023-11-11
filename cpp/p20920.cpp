#include<iostream>
#include<map>
#include<vector>    
#include<algorithm>
#include<string>
using namespace std;

map <string, int> mp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    string s;

    for(int i=0; i<n; i++){
        cin >> s;
        if(s.length() >= m)
        mp[s] += 1;
    }

    vector<pair<string, int>> v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), [](auto a, auto b){
    if (a.second==b.second)
    {
        if (a.first.length()==b.first.length())
            return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
    });

    for(int i=0; i<v.size(); i++){
        cout << v[i].first << '\n';
    }
}