#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
using namespace std;

int n, k, cnt = 0;
int a[11];
bool check[11];
vector<int> v;
vector<int> ans;
set<string> s;
void go(int cnt){
    if(cnt==k){
        string temp = "";
        for (int i = 0; i < k;i++){
            temp += to_string(v[i]);
        }
        s.insert(temp);
        return;
    }
    for (int i = 0; i < n;i++){
        if(check[i])continue;
        check[i] = true;
        v.push_back(a[i]);
        go(cnt + 1);
        check[i] = false;
        v.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n >> k;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    go(0);
    cout << s.size();
    return 0;
}

