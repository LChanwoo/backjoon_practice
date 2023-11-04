#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

int cache[1000001];


int process(int n){

    if (n == 1)
    {
        return 0;
    }
    if (cache[n] != -1)
    {
        return cache[n];
    }

    if(n % 6 == 0)
    {
        return cache[n] = min(process(n/3), process(n/2) )+1;
    }
    else if (n % 3 == 0)
    {
        return cache[n] = min(process(n/3), process(n-1) )+1;
    }
    else if (n % 2 == 0)
    {
        return cache[n] = min(process(n/2), process(n-1) )+1;
    }
    else
    {
        return cache[n] = process(n-1) +1;
    }
}

int main(){
    int X;
    cin >> X;
    memset(cache, -1, sizeof(cache));

    cout << process(X);
    return 0;
}