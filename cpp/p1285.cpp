#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int n, ans = 100000000;
int a[20];
string s;

void go(int here){
    if(here == n){
        int sum = 0;
        for (int i = 0; i < n;i++){
            int cnt = 0;
            for (int j = 0; j < n;j++){
                if(a[j] & (1 << i)) cnt++;
            }
            sum += min(cnt, n - cnt);
        }
        ans = min(ans, sum);
        return;
    }
    a[here] = ~a[here];
    go(here + 1);
    a[here] = ~a[here];
    go(here + 1);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> s;
        int value = 1;
        for (int j = 0; j < s.length();j++){
            if(s[j]=='T') a[i] |= value;
            value *= 2;
        }
    }
    go(0);
    cout << ans;
}
