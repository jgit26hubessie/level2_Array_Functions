#include<iostream>
using namespace std ;

int main(){
    int scores[5] ;
    int total = 0 ;
    double average ;

    cout << "enter the scores: " << endl ;
    for (int i = 0; i < 5 ; i++){
        cout << "score of the students " << i + 1 << ": " ;
        cin >> scores[i] ;
        total += scores[i] ;
    }
    average = total/5.0 ;
    cout << "average score: " << average << endl ;

    for(int i = 0; i < 5 ; i++){
        cout << "student" << i+1 << " " ;
        if(scores[i] >= 50){
            cout << "passed" << endl;
        }
        else {
            cout << "falied" << endl;
        }
    }
    return 0 ;
}