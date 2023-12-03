#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int A, B;

int main(){
    cin >> A >> B;
    int ans = 1;
    while(B!=A){
        if(B<A){
            ans = -1;
            break;
        }
        if(B%10==1){
            B /= 10;
        }else if(B%2==0){
            B /= 2;
        }else{
            ans = -1;
            break;
        }
        ans++;
    }
    cout << ans;
    return 0;
}