#include<iostream>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int *a = new int[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] < x){
            cout << a[i] << ' ';
        }
    }
    cout << '\n';
    delete[] a;
    return 0;
}