#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    set<string> s;
    string str;
    for(int i=0; i<n; i++){
        cin >> str;
        s.insert(str);
    }
    vector<string> v(s.begin(), s.end());
    sort(v.begin(), v.end(), [](string a, string b){
        if(a.size() == b.size()){
            return a < b;
        }
        return a.size() < b.size();
    });
    for(int i=0; i<v.size(); i++){
        cout << v[i] << '\n';
    }
}