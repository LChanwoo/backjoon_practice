#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m,j, a;

int main(){
    cin >> n >> m>>j;
    int l = 1;
    int cnt = 0;
    for (int i = 0;i<j;i++){
        cin >> a;
        if(l<=a&&a<=l+m-1){
            continue;
        }
        if(a<l){
            cnt += l - a;
            l = a;
        }
        else{
            cnt += a - (l + m - 1);
            l = a - m + 1;
        }
    }
    cout << cnt;
}
