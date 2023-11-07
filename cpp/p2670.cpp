#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    double max =0;
    vector<double> v(n);
    vector<double> dp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        double tmp = 1;
        for(int j=i;j<n;j++){
            tmp *= v[j];
            if(tmp>max){
                max = tmp;
            }
        }

    }
    cout << fixed;
	cout.precision(3);
    cout << max;
    return 0;
}