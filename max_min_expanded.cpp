#include<iostream>
#include<vector>
#include "stats_func.h"

using namespace std ;

int main(){
    int n ;
    cout << "enter how many numbers you want to analyze: " ;
    cin >> n ;

    vector<int> data(n) ;
    cout << "enter the numbers: " ;
    for(int i = 0; i < n; ++i){
        cin >> data[i] ;
    }

    double* mean = getMean(data) ;
    double* median = getMedian(data) ;
    double* variance = getVariance(data) ;
    double* stddev = getStdDev(data) ; 

    cout << "\nStatistical Analysis Results:\n" ;
    cout << "Mean: " << *mean << endl ;
    cout << "Median: " << *median << endl ;
    cout << "Variance: " << *variance << endl ;
    cout << "Standard Deviation: " << *stddev << endl ;

    return 0 ;
}