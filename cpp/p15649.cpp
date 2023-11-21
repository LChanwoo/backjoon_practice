#include<iostream>
#include<algorithm>
using namespace std;
int backtracking(int N, int M, int arr[], int ans[], int index){
    if(index == M){
        for(int i=0;i<M;i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return 0;
    }
    for(int i=0;i<N;i++){
        if(arr[i] != -1){
            ans[index] = arr[i];
            arr[i] = -1;
            backtracking(N, M, arr, ans, index+1);
            arr[i] = ans[index];
        }
    }
    return 0;
}

int main(){
    int N, M;
    cin >> N >> M;
    int arr[N];
    int ans[M];
    for(int i=0;i<N;i++){
        arr[i] = i+1;
    }
    backtracking(N, M, arr, ans, 0);
}