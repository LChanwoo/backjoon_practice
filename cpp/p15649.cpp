#include<iostream>
#include<algorithm>
using namespace std;

int backtracking(int N, int M, int arr[], int index){
    if(index == M){
        for(int i=0;i<M;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return 0;
    }
    for(int i=0;i<N;i++){
        arr[index] = i+1;
        backtracking(N, M, arr, index+1);
    }
    return 0;
}

int main(){
    int N, M;
    cin >> N >> M;

    int arr[N];
    for(int i=0;i<N;i++){
        arr[i] = i+1;
    }
    backtracking(N, M, arr, 0);



}