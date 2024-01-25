#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int n, a, ans;
stack<int> s;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        s.push(a);
    }
    int max = 0;
    while (!s.empty())
    {
        if (max < s.top())
        {
            max = s.top();
            ans++;
        }
        s.pop();
    }
    cout << ans;
    return 0;
}