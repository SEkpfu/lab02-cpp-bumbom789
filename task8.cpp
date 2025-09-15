#include <iostream>
using namespace std;
int main()
{
    double x,y;
    cout << "Enter x: ";cin >> x;
    cout << "Enter y: ";cin >> y;
    if ((x*x+y*y)<=4){
        cout << "10 points";
    }
    else{
        if ((x*x+y*y)<=16)
            cout << "5 points";
        else
            cout << "0 points";
    }
    return 0;
}