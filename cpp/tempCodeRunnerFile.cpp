#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int n;
map<string, int> m;
map<string, int> m2;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    string s;
    for (int i = 0; i < n;i++){
        cin >> s;
        m[s]=i;
    }
    for (int i = 0; i < n;i++){
        cin >> s;
        m2[s]=i;
    }
    int cnt = 0;
    for(auto i : m){
        if(m2[i.first]<i.second) cnt++;
    }
    cout << cnt;
    return 0;
}
