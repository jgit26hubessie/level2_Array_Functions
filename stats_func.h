#ifndef STATS_FUNC_H
#define STATS_FUNC_H

#include<vector>
#include<cmath>
#include<numeric>

void bubbleSort(std::vector<int>* data){
    int n = data->size();
    for(int i = 0; i< n - 1; ++i){
        for(int j = 0; j < n - 1; ++j){
            if((*data)[j] > (*data)[j+1]) {
                std::swap((*data)[j], (*data)[j+1]) ;
            }
        }
    }
}
double* getMean(const std::vector<int>& data){
    double* mean = new double ;
    *mean = (data.empty()) ? 0.0 : static_cast<double>(std::accumulate(data.begin(), data.end(), 0))/ data.size() ;
    return mean ;
}
double* getMedian(std::vector<int> data){
    bubbleSort(&data) ;
    double* median = new double ;
    int n = data.size() ;
    if(n % 2 == 0)
    *median = (data[n/2 - 1] + data[n/2]) / 2.0 ;
    else 
    *median = data[n/2] ;
    return median ;
}
double* getVariance(const std::vector<int>& data){
    double* variance = new double ;
    if(data.empty()){
        *variance = 0.0 ;
        return variance ;
    }
    double mean = *getMean(data);
    double sum = 0.0 ;
    for( int value : data){
        sum += (value - mean) * (value - mean) ;
    }
    *variance = sum/data.size() ;
    return variance ;
}
double* getStdDev(const std::vector<int>& data){
    double* stddev = new double;
    *stddev = std::sqrt(*getVariance(data)) ;
    return stddev ;
}

#endif