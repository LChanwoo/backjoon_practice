#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main(){
    map<string,float> m = {{"A+",4.5},{"A0",4.0},{"B+",3.5},{"B0",3.0},{"C+",2.5},{"C0",2.0},{"D+",1.5},{"D0",1.0},{"F",0.0}};
    float sum=0;
    int count=0;
    for(int i=0; i<20;i++){
        string subject ;
        float score;
        string grade;
        cin >> subject >> score >> grade;
        if(grade!="P"){
            sum+=score*m[grade];
            count+=score;
        }
    }
    cout<< sum/count;

}
