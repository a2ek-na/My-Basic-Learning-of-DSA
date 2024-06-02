//OUESTION:PROGRAM THAT WILL TELL YOU WHETHER IT'S A VOWEL OR CONSONENT
//CREATED ON 24th NOVEMBER OF 2K22
#include<iostream>
using namespace std ;

int main () {
    char character ;
    cout<<"ENTER AN ENGLISH ALPHABET : " ;
    cin>>character ;

    switch (character) 
    {
        case 'a' :
        cout<<"THIS IS A VOWEL" ;
        break;

        case 'e' :
        cout<<"THIS IS A VOWEL" ;
        break;

        case 'i' :
        cout<<"THIS IS A VOWEL" ;
        break;

        case 'o' :
        cout<<"THIS IS A VOWEL" ;
        break;

        case 'u' :
        cout<<"THIS IS A VOWEL" ;
        break;

        default :
        cout<<"THIS IS A CONSONENT " ;
    }
    return 0 ;

}