#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int n, cnt;
string s;
map<string, int> m;
int a[1001] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> s;
        m[s]=i;
    }
    for (int i = 0; i < n;i++){
        cin >> s;
        a[i]=m[s];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1;j<n;j++)
        {
            if(a[i]>a[j]){
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}
