// 백준 1874 스택수열
#include <iostream>
#include <stack>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    stack<int> st;
    vector<char> v;
    int idx = 0;
    for(int i=1;i<=n;i++){
        st.push(i);
        v.push_back('+');
        while(!st.empty() && st.top()==arr[idx]){
            st.pop();
            idx++;
            v.push_back('-');
        }
    }
    if(!st.empty()){
        cout << "NO";
    }else{
        for(int i=0;i<v.size();i++){
            cout << v[i] << '\n';
        }
    }

    return 0;
}