#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, tmp;
    set<int> s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> tmp;
        s.insert(tmp);
    }
    vector<int> v(s.begin(), s.end());
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}