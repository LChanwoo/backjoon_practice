#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

long long MAX = pow(2, 15);

long long N, r, c;
long long cnt=0;
void div4(long long x, long long y, int n = MAX)
{
    if (x == r && y == c)
    {
        cout << cnt;
        return;
    }
    if(r<x+n && r>=x && c<y+n && c>=y){
        div4(x, y, n / 2);
        div4(x, y + n / 2, n / 2);
        div4(x + n / 2, y, n / 2);
        div4(x + n / 2, y + n / 2, n / 2);
    }
    else
        cnt += n * n;
}

int main()
{   
    cin >> N>>r>>c;
    div4(0, 0, pow(2, N));
}