#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int N, MAX = -1000000000, MIN = 1000000000;
int arr[500001];
vector<int> v;

int getAverage(){
    double sum = 0;
    for (int i = 0; i < N;i++){
        sum += arr[i];
    }
    return round(sum / N);
}

int getMedian(){
    return arr[(N-1) / 2];
}

int getMode(){
    int result;
    int count = 0;
    int cnt2[8001] = {0};
    for (int i = 0; i < N;i++){
        cnt2[arr[i] + 4000]++;
    }
    int max_mode = *max_element(cnt2, cnt2 + 8001);
    for (int i = 0; i < 8001;i++){
        if(cnt2[i] == max_mode){
            count++;
            result = i - 4000;
        }
        if(count == 2){
            break;
        }
    }
    return result;
}

int getRange(){
    return arr[N - 1] - arr[0];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N;i++){
        cin >> arr[i];
    }
    sort(arr, arr + N);
    cout << getAverage() << '\n';
    cout << getMedian() << '\n';
    cout << getMode() << '\n';
    cout << getRange() << '\n';
    return 0;
}
