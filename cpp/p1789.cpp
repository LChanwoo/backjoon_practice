#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long S,sq;
    double sql;
    cin >> S;
    // 수학적 접근... 규칙을 못찾겠다
    // sq = sqrt(2*S);
    // sql = ceil(sqrtl(2*S));
    // cout << sq <<" / " << sq+1 << " / " << sq*(sq-1)/2<< " / " << sq*(sq+1)/2<<endl;
    // if(sql==sq){
    //     cout << sq;
    // }else{
    //     cout << sql;
    // }
    long long N = 1;
    if(S==1){
        cout << 1;
        return 0;
    }
    while (N * (N + 1) / 2 <= S) {
        N++;
    }

    cout <<N-1;
    return 0;
}