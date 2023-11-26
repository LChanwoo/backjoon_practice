#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j]==m){
                count++;
                break;
            }
        }
    }
    cout << count;
}