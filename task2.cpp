#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: "; cin >> n;
    if (n==0){
        cout << "Number = 0" << endl;
    }
    else {
        if (n>0){
            cout << "Number > 0" << endl;
        }
        else{
            cout << "Number < 0" << endl;
        }
    }
    if (n%2==0){
        cout << "Number is divisible by 2";
    }
    else{
        cout << "Number isn't divisible by 2";
    }
    return 0;
}