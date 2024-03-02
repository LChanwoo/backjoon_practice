#include<iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int arr[N];
    for (int i = 0; i < N;i++){
        arr[i] = 0;
    }
    for (int i = 0; i < M;i++){
        int a, b, c;
        cin >> a >> b >> c;
        for (int j = a - 1; j < b;j++){
            arr[j] = c;
        }
    }
    for (int i = 0; i < N;i++){
        cout << arr[i] << " ";
    }
    return 0;
}