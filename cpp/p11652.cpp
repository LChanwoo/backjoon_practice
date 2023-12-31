#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
long long int ans,ans_second, N, temp;
map<long long int, long long int> m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    for (int i = 0; i < N;i++){
        cin >> temp;
        m[temp]++;
    }
    for(auto i:m){
        if(i.second>ans_second){
            ans = i.first;
            ans_second = i.second;
        }
    }
    cout << ans;
    return 0;
}
