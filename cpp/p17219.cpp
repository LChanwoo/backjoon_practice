#include<iostream>
#include<string>
#include<map>
using namespace std;

map<string, string> mp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    string s1;
    string s2;
    for(int i=0; i<n; i++){
        cin >> s1 >> s2;
        mp.insert({s1, s2});
    }

    for(int i=0; i<m; i++){
        cin >> s1;
        cout << mp[s1] << '\n';
    }
}