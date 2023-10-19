#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> scores;
    double max = 0;
    for(int i = 0; i < n ; i++){
        double score;
        cin >> score; 
        if(score > max ) max = score;
        scores.push_back(score);
    }
    cout << accumulate(scores.begin(),scores.end(),0.0)/max/(double)scores.size()*100;
    return 0;
}