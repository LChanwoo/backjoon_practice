#include<iostream>
#include<algorithm> 
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100001];
    int avg = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // 최대값을 구하기 위해서 정렬을 해준다.
    sort(arr, arr + n);
    for (int i = 0; i<n;i++){
        // 정렬된 배열에서 가장 큰 값부터 차례대로 곱해준다.
        arr[i] = arr[i] * (n - i);
        cout << arr[i] << endl;
    }
    // 곱해준 배열에서 가장 큰 값을 출력한다.
    cout << *max_element(arr, arr + n);
}