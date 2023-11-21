#include<iostream>
#include<string>
using namespace std;

int NandM2(int N, int M, int idx, int arr[]){
    if(idx == M){
        for(int i=0; i<M; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return 0;
    }
    for(int i=1; i<=N; i++){
        if(idx == 0){
            arr[idx] = i;
            NandM2(N, M, idx+1, arr);
        }
        else if(arr[idx-1] < i){
            arr[idx] = i;
            NandM2(N, M, idx+1, arr);
        }
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    int arr[M];
    NandM2(N, M, 0, arr);
}