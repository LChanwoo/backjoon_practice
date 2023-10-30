#include<iostream>
#include<vector>
#include<stack>
#include<utility>
using namespace std;

int cnt[1000001] ={0};
int A[1000001] = {0};
int NGF[1000001]={0};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    fill(NGF, NGF + N, -1);
    stack<pair<int,int>> s;
    for(int i=0;i<N;i++){
        cin >> A[i];
        cnt[A[i]]=cnt[A[i]]+1;
    }

    for(int i=0;i<N;i++){
        while(!s.empty() && s.top().first <cnt[A[i]] ){
            NGF[s.top().second] = A[i];
            s.pop();
        }        
        s.push({cnt[A[i]],i});
    }
    

    for(int i=0;i<N;i++){
        cout << NGF[i]<< ' ';        
    }
    return 0;
}