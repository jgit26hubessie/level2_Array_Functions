#include<iostream>
#include<string>
#include<cctype>
using namespace std ;

int main(){
    string input ;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, specialCharacters = 0 ;

    cout << "enter a string: " ;
    getline(cin, input) ;

    for(int i = 0; i < input.length() ; i++){
        char ch = tolower(input[i]) ;

        if(isalpha(ch)) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
                vowels++ ;
            }
            else{
                consonants++ ;
            }
        }
        else if(isdigit(ch)){
            digits++ ;
        }
        else if(isspace(ch)){
            spaces++ ;
        }
        else{
            specialCharacters++ ;
        }
    }
    cout << "vowels: " << vowels << endl ;
    cout << "consonants: " << consonants << endl ;
    cout << "digits: " << digits << endl ;
    cout << "spaces: " << spaces << endl ;
    cout << "special characters: " << specialCharacters << endl ;

    return 0 ;
}

