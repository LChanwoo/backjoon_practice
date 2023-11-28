#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, a[1025][1025];
int go(int y,int x, int n){
    if(n==1){
        return a[y][x];
    }
    int n1= go(y,x,n/2);
    int n2= go(y,x+n/2,n/2);
    int n3= go(y+n/2,x,n/2);
    int n4= go(y+n/2,x+n/2,n/2);
    vector<int> v = {n1, n2, n3, n4};
    sort(v.begin(), v.end());
    return v[2];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    cout << go(0, 0, n);
    return 0;
}