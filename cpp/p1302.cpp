#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
int N, mx=0;
string s;
map<string, int> m;
vector<string> v;
int main(){
    cin >> N;
    for (int i = 0; i < N;i++){
        cin >> s; m[s]++;
        if(m[s]>mx) mx = m[s];
    }
    for(auto i:m){
        if(i.second==mx) v.push_back(i.first);
    }
    sort(v.begin(), v.end());
    cout << v[0];
    return 0;
}
