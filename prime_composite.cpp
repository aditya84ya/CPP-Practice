#include<iostream> 
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 2;
    if(n<2){
            cout << "Neither Prime nor Composite";
            return 0;
        }
    while(i<n){
        if(n%i==0){
            cout << "Composite Number";
            return 0;
        }
        i++;
    }
    if(i==n){
        cout << "Prime Number";
    }
}