#include<iostream>
#include<map>
using namespace std;
int n, m, tmp;
map<int,int> mp;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    cin >> n;
    for(int i=0;i<n;i++) cin >> tmp, mp[tmp]++;
    cin >> m;
    for(int i=0;i<m;i++) cin >> tmp, cout << mp[tmp] << ' ';
    return 0;
}