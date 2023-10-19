#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //싱글벙글 인풋의 시간
    double xA,yA,xB,yB,xC,yC;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;
    cout.precision(17);
    //싱글벙글 기울기 구하는 시간
    double mab,mbc,mac;

    //기울기가 모두 같으면 평행사변형 못만들어~
    if((xB-xA)*(yC-yA)==(yB-yA)*(xC-xA)){
        cout<< -1.0;
        return 0;
    } 
    //싱글벙글 각 점간의 거리 구하는 시간~

    double dab = sqrt(pow(yB-yA,2)+pow(xB-xA,2));
    double dbc = sqrt(pow(yC-yB,2)+pow(xC-xB,2));
    double dac = sqrt(pow(yC-yA,2)+pow(xC-xA,2));

    //싱글벙글 가장 긴변과 가장 짧은 변을 구하는 시간~
    //쌈박한 버블소트
    double arr[] = {dab,dbc,dac};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(arr[i]<arr[j]){
                double tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    //싱글벙글 가장 큰 둘레 길이와 가장 작은 둘레 길이의 차이
    cout << 2*(arr[2]-arr[0]);
    return 0;
}