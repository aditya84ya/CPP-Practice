#include<iostream>
using namespace std;
int main(){
    //take n value and check +ve or -ve or zero
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n > 0){
        cout<<"The number is positive."<<endl;
    }
    else if(n < 0){
        cout<<"The number is negative."<<endl;
    }
    else{
        cout<<"The number is zero."<<endl;
    }

    //lets see for checking lower case or upper case or numeric value
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"The character is lowercase."<<endl;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout<<"The character is uppercase."<<endl;
    }
    else{
        cout<<"The character is numeric or special."<<endl;
    }
    return 0;
}