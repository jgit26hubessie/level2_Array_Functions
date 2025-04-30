#include<iostream>
using namespace std ;

int main(){
int N ;
cout << "Enter the number of elements: " ;
cin >> N ;

int arr[50] ;

for(int i = 0; i < N; i++){
    cout << "enter element" << i + 1 << ": " ;
    cin >> arr[i] ;
}
int max = arr[0] ;
int min = arr[0] ;

for(int i = 1; i < N; i++){
    if(arr[i] > max) {
        max = arr[i] ;
    }
    if(arr[i] < min) {
        min = arr[i] ;
    }
}
cout << "Maximum element: " << max ;
cout << "\nMinimum element: " << min ;

return 0 ;
}