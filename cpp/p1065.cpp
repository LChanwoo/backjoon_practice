#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;

int main(){
    cin >> n;
    int cnt = 0; // 한수 카운팅
 
	if (n < 100) {
		cout << n;
        return 0;
    }
    else
    {
        cnt = 99;
 
		for (int i = 100; i <= n; i++) {
			int hun = i / 100;		 // 백의 자릿수
			int ten = (i / 10) % 10; // 십의 자릿수
			int one = i % 10;
 
			if ((hun - ten) == (ten - one)) { // 각 자릿수가 수열을 이루면
				cnt++;
			}
		}
    }
    cout << cnt;
    return 0;
}