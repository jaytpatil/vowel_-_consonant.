#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;

    switch (ch)
    {
    case 'a': 
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
     cout<<"Vowel";
     break;
    
    default: cout<<"consonant";
        break;
    }
    return 0;
}