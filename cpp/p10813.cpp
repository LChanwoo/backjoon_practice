#include<iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int arr[N];
    for (int i = 0; i < N;i++){
        arr[i] = i + 1;
    }
    for (int i = 0; i < M;i++){
        int a, b;
        cin >> a >> b;
        int temp = arr[a - 1];
        arr[a - 1] = arr[b - 1];
        arr[b - 1] = temp;
    }
    for (int i = 0; i < N;i++){
        cout << arr[i] << " ";
    }
    return 0;
}