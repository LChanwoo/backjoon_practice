#include<iostream>
#include<bitset>

using namespace std;

bitset<10000000> bs;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        if(bs[tmp]==0){
            bs[tmp] = 1;
        }else{
            cout << tmp << " ";
            break;
        }
    }
    return 0;
}