#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

string s;
int a[200001][26];
int q;
int main(){

	ios_base::sync_with_stdio(false); 
	cout.tie(NULL); 
	cin.tie(NULL);

    cin >> s >> q;

    a[0][s[0] - 'a']++;
    for (int i = 1; i < s.size();i++){
        for (int j = 0; j < 26;j++){
            a[i][j] = a[i-1][j];
        }
        a[i][s[i] - 'a']++;
    }
    char tmp;
    int l, r;
    while(q--)
    {
        cin >> tmp >> l >> r;
        if(l==0)
            cout << a[r][tmp - 'a'] << '\n';
        else
            cout << a[r][tmp - 'a'] - a[l - 1][tmp - 'a'] << '\n';
    }
    return 0;
}