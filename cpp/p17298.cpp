#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> v(N);

    for(int i=0;i<N;i++){
        cin >> v[i];
    }

    stack<int> s;
    vector<int> ans(N,-1);
    for(int i = 0; i<N ;i++){
        while(!s.empty() && v[s.top()]<v[i]){
            ans[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }
    for(int i=0;i<N;i++){
        cout << ans[i] << " ";
    }
    return 0;
}