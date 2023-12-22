#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

long long n, ans, tmp;
long long a[500001] = {0};
stack<pair<long long, long long>> st;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n ;
    for (int i = 0;i<n;i++){
        cin >> a[i];
        int cnt = 1;
        while(st.size() && st.top().first <= a[i]){
            ans += st.top().second;
            if(st.top().first == a[i]) cnt = st.top().second + 1;
            else cnt = 1;
            st.pop();
        }
        if(st.size()) ans++;
        st.push({a[i], cnt});
        cout << cnt << '\n';
    }
    cout << ans;
    return 0;
}
