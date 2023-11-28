#include<iostream>
#include<vector>
#include<algorithm>
#include<string>   
using namespace std;

int a[65][65];

int n;
string go(int x, int y, int n){
    if(n==1)
        return to_string(a[x][y]);
    int ans = 0;
    for (int i = x; i < x + n;i++){
        for (int j = y; j < y + n;j++){
            ans += a[i][j];
        }
    }
    if(ans==0)
        return "0";
    if(ans==n*n)
        return "1";
    cout << "(";
    cout << go(x, y, n / 2);
    cout << go(x, y + n / 2, n / 2);
    cout << go(x + n / 2, y, n / 2);
    cout << go(x + n / 2, y + n / 2, n / 2);
    cout << ")";
    return "";
}

int main(){
    cin >> n;
    int sum = 0;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        for(int j=0;j<n;j++){
            a[i][j] = s[j] - '0';
            sum += a[i][j];
        }
    }
    if(sum==0)
        cout << "0";
    else if(sum==n*n)
        cout << "1";
    else
        go(0, 0, n);
    return 0;
}