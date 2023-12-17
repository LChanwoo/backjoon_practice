#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    vector<pair<int, int>> v(N);
    for (int i = 0; i < N;i++){
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < N;i++){
        cout << v[i].second << ' ' << v[i].first << '\n';
    }
}