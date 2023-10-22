#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count=0;
    int change=1000-n;
    while(change!=0){
        if(change>=500){
            change-=500;
            count++;
        }
        else if(change>=100){
            change-=100;
            count++;
        }
        else if(change>=50){
            change-=50;
            count++;
        }
        else if(change>=10){
            change-=10;
            count++;
        }
        else if(change>=5){
            change-=5;
            count++;
        }
        else if(change>=1){
            change-=1;
            count++;
        }
    }
    cout << count;
    return 0;
}