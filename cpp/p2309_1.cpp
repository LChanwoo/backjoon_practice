#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find(int *a, int n, int r, int depth){
    cout << n << " : " << r << " : " << depth << '\n';
    if(depth == r){
        int sum = 0;
        for (int i = 0; i < r;i++){
            sum += a[i];
        }
        if(sum==100){
            for (int i = 0; i < r;i++){
                cout << a[i] << '\n';
            }
            return 1;
        }
        return 0;
    }
    for (int i = depth; i < n;i++){
        swap(a[i], a[depth]);
        if(find(a, n, r, depth + 1)==1)
            return 1;
        swap(a[i], a[depth]);
    }
    return 0;
}

int main(){
    int a[9];
    int sum = 0;
    for (int i = 0; i < 9;i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + 9);
    find(a, 9, 7, 0);
    return 0;
}