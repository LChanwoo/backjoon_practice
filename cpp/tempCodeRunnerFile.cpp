#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = i;
    }
    for(int i=0;i<m;i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(a == 0){
            for(int j=b;j<=c;j++){
                arr[j] = b;
            }
        }else{
            if(arr[b] == arr[c]){
                cout << "YES" << '\n';
            }else{
                cout << "NO" << '\n';
            }
        }
    }
}