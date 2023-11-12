//홀짝홀짝
// 길이가 N인 수열 a가 있다. 초기 상태에서 모든 1 <= i <= N 에 대해 
// a_i = 0을 만족한다. 이 a에 다음과 같은 아래 쿼리를 처리하는 프로그램을 작성하라.
// 1 L R w : L <= i <=e R 인 a_i에 w를 더한다.
// 2 L R : L <= i \<= R인 a_i중 홀수와 짝수의 개수를 차례대로 하나의 줄에 공백으로 구분하여 출력한다


#include<iostream>

using namespace std;

int main(){
    // N: 수열의 길이
    // L, R: 쿼리의 인자
    // w: 쿼리의 인자
    // Q: 쿼리의 개수
    int N, L, R, w, Q;
    cin >> N >> Q;

    // 수열 a
    int a[N+1];

    // 초기화
    for(int i=1; i<=N; i++){
        a[i] = 0;
    }

    // 쿼리 처리
    for(int i=0; i<Q; i++){
        cin >> L >> R;
        if(L == 1){
            cin >> w;
            for(int j=L; j<=R; j++){
                a[j] += w;
            }
        }
        else{
            int odd = 0;
            int even = 0;
            for(int j=L; j<=R; j++){
                if(a[j] % 2 == 0){
                    even++;
                }
                else{
                    odd++;
                }
            }
            cout << odd << " " << even << "\n";
        }
    }






}