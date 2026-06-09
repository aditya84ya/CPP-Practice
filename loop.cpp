#include<iostream>
using namespace std;
int main(){
    //print first five natural numbers using while loop
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    while(i <= n){
        cout << i << endl;
        i = i + 1;
    }

    // sum  of n numbers using while loop
    int sum = 0;
    i = 1;
    while(i <= n){
        sum = sum + i;
        i = i + 1;
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}