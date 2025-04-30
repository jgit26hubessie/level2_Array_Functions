#include<iostream>
using namespace std ;

void printArray(int arr[], int n){
    for (int i = 0; i < n ; i++){
        cout << arr[i] << " " << endl ;
    }
}

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n-1 ; i++) {
        for (int j = 0; j < n-i-1 ; j++) {
           if (arr[j] > arr[j+1]) {
            int temp = arr[j] ;
            arr[j] = arr[j+1] ;
            arr[j+1] = temp ;
           } 
        }
        cout << "step " << i+1 << ": \n" ;
        printArray(arr, n) ;
    }
}
int main(){
    int n ;

    cout << "Enter the number of elements: " ;
    cin >> n ;

    int arr[n] ;

    cout << "enter the elements: " ;
    for(int i = 0; i < n ; i++){
        cin >> arr[i] ;
    }
    cout << "original array: \n" ;
    printArray(arr, n) ;

    bubblesort(arr, n) ;

    cout << "sorted array: " ;
    printArray(arr, n) ;

    return 0 ;
}