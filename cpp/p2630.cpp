#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int a[129][129];
string go(int x, int y, int n)
{
    if(n==1)
        return to_string(a[x][y]);
    int ans = 0;
    for(int i=x;i<x+n;i++){
        for(int j=y;j<y+n;j++){
            ans += a[i][j];
        }
    }
    if(ans==0)
        return "0";
    if(ans==n*n)
        return "1";
    string s1=go(x, y, n / 2);
    string s2=go(x, y + n / 2, n / 2);
    string s3=go(x + n / 2, y, n / 2);
    string s4=go(x + n / 2, y + n / 2, n / 2);
    return s1 + s2 + s3 + s4;
}

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
    }
    if(sum==0){
        cout << "1\n";
        cout << "0";
        return 0;
    }
    if(sum==n*n){
        cout << "0\n";
        cout << "1";
        return 0;
    }
    string st = go(0, 0, n);
    cout << count(st.begin(), st.end(), '0') << '\n';
    cout << count(st.begin(), st.end(), '1') << '\n';
    return 0;
}