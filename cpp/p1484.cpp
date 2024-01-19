#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int G;
vector<int> ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> G;
    long long l = 1, r = 1;
    long long tmp =0;
    while (true)
    {
        tmp = r * r - l * l;
        if(tmp==G){
            ans.push_back(r);
        }
        if(r-l==1 && tmp>G) break;
        if(tmp>G) l++;
        else r++;
    }
    if(ans.size()==0){
        cout << -1;
        return 0;
    }
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << '\n';
    }
    return 0;
}