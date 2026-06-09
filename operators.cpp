#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 5;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    // lets see various division operators
    cout << "10 / 3 = " << 10 / 3 << endl;
    cout << "10.0 / 3 = " << 10.0 / 3 << endl;
    cout << "10 % 3 = " << 10 % 3 << endl;

    // lets see some relational operators
    cout << "a == b: " << (a == b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a != b: " << (a != b) << endl;

    // lets see some logical operators
    bool x = true;
    bool y = false;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << !x << endl;

    // lets see some bitwise operators
    int c = 5; // 0101 in binary
    cout << "c & 3 = " << (c & 3) << endl; // 0101 & 0011 = 0001
    cout << "c | 3 = " << (c | 3) << endl; // 0101 | 0011 = 0111
    cout << "c ^ 3 = " << (c ^ 3) << endl; // 0101 ^ 0011 = 0110
    cout << "~c = " << (~c) << endl; // ~0101 = 1010 (two's complement)
    return 0;
}