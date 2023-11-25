#include<iostream>

using namespace std;

int main(){
    const int max_time = 101;
    int a, b, c;
    int total_cost = 0;
    int parking_lot[max_time] = {0};
    cin >> a >> b >> c;
    for(int i=0; i<3; i++){
        int start, end;
        cin >> start >> end;
        for(int j=start; j<end; j++){
            parking_lot[j]++;
        }
    }
    for(int i=0; i<max_time; i++){
        if(parking_lot[i]==1){
            total_cost += a;
        }
        else if(parking_lot[i]==2){
            total_cost += b * 2;
        }
        else if(parking_lot[i]==3){
            total_cost += c * 3;
        }
    }
    cout << total_cost;
    return 0;
}
