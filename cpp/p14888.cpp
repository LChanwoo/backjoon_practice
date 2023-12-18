#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int N, A[11], op[4];
int max_ans = -1000000000;
int min_ans = 1000000000;

int calc(int a, int b, int op){
    if(op==0) return a + b;
    else if(op==1) return a - b;
    else if(op==2) return a * b;
    else return a / b;
}

void go(int index, int ans){
    if (index == N-1)
    {
        max_ans = max(max_ans, ans);
        min_ans = min(min_ans, ans);
        return;
    }
    for (int i = 0; i < 4;i++){
        if(op[i]>0){
            op[i]--;
            go(index + 1, calc(ans, A[index + 1], i));
            op[i]++;
        }
    }
}

int main(){
    cin >> N;
    for (int i = 0; i < N;i++) cin >> A[i];
    for (int i = 0; i < 4;i++) cin >> op[i];
    go(0, A[0]);
    cout << max_ans << '\n' << min_ans;
    return 0;
}
