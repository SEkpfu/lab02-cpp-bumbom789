#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter your grade: "; cin >> x;
    switch(x){
        case 5 : cout << "Excellent"; break;
        case 4 : cout << "Good"; break;
        case 3 :cout << "Udov"; break;
        case 2 :
        case 1 : cout << "Bad";break;
        default: cout << "Incorrect data";
    }
    return 0;
}