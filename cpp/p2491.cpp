#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt = 1;
    int arr[100002];
    vector<int> v;
    cin >> n;
    if(n==1)
    {
        cout << 1;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>=arr[i-1])
        {
            cnt++;
        }
        else
        {
            v.push_back(cnt);
            cnt = 1;
        }
    }
    v.push_back(cnt);
    cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<=arr[i-1])
        {
            cnt++;
        }
        else
        {
            v.push_back(cnt);
            cnt = 1;   
        }
    }
    v.push_back(cnt);
    cout << *max_element(v.begin(),v.end());
}