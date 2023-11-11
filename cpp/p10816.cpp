#include<iostream>
#include<map>
using namespace std;

map<int, int> mp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m , o;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> o;
        mp[o] += 1;
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> o;
        cout << mp[o] << ' ';
    }
    return 0;
}