#include<iostream>
#include<algorithm>
using namespace std;
int n,tmp;

int main(){
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr + n );
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] * (n - i);
    }
    cout << sum;
}