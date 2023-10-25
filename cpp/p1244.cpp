#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    
    vector<int> v(n);
    
    for(int i=0; i < n;i++){
        cin >> v[i];
    }

    cin >> m;
    
    for(int i=0; i <m;i++){
        int gender , switchIdx;
        cin >> gender >> switchIdx;
        if(gender == 1){
            for(int j=switchIdx-1; j<=n ; j=j+switchIdx){
                v[j] = 1 - v[j];
            }
        }else{
            int f=0;
            v[switchIdx-1] = 1 - v[switchIdx-1] ;
            while(switchIdx - 1 + f < n && switchIdx - 1 - f >= 0 && v[switchIdx-1 + f] == v[switchIdx-1 - f]){
                v[switchIdx+f-1] == 0? v[switchIdx+f-1] = 1 : v[switchIdx+f-1] = 0;
                v[switchIdx-f-1] == 0? v[switchIdx-f-1] = 1 : v[switchIdx-f-1] = 0;
                f++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
        if ((i + 1) % 20 == 0 || i == n - 1) {
            cout << endl;
        }
    }
    return 0;
}
