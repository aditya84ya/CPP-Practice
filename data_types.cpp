#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    float b = 3.14;
    char c = 'A';
    bool d = true;
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << d << endl;
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of char: " << sizeof(c) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(d) << " bytes" << endl;
    unsigned int e = 120;
    cout << "Unsigned Integer: " << e << endl;
    unsigned int ac = -111;
    cout << "Unsigned Integer with negative value: " << ac << endl;
    return 0;
}