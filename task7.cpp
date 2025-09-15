#include <iostream>
using namespace std;
int main()
{
    double a,b;
    char z;
    cout << "Enter first number: "; cin >> a;
    cout << "Enter second number: "; cin >> b;
    cout << "Enter sign: "; cin >> z;
    switch(z){
        case '+': cout << "a+b = "<< a+b; break;
        case '-': cout << "a-b = " << a-b; break;
        case '*': cout << "a*b = " << a*b;break;

    }
    return 0;
}