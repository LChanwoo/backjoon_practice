#include<iostream>
#include<algorithm>
using namespace std;

// boj 1475번 방 번호, 실버 5, 분류 구현

int n;

int main(){
    cin >> n;
    int arr[10] = {0,};
    int max = 0;
    while(n>0){
        arr[n % 10]++;
        n /= 10;
    }
    arr[6] = (arr[6] + arr[9] + 1) / 2;
    arr[9] = 0;
    for (int i = 0; i < 10;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << max;
}