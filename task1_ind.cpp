#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,c,h,S;
    int nomer;
    cout << "Enter the number of an element: "; cin >> nomer;
    switch(nomer){
        case 1:
            cout << "Enter katet (a): "; cin >> a;
            c = a*a;
            h = c/2.0;
            S = c*h/2.0;
            cout << "Hypotenuse = " << c << '\n' << "h = " << h << '\n' << "S = " << S;
            break;
        case 2:
            cout << "Enter hypotenuse: "; cin >> c;
            a = sqrt(c);
            h = c/2.0;
            S = c*h/2.0;
            cout << "Katet (a) = " << a << '\n' << "h = " << h << '\n' << "S = " << S;
            break;
        case 3:
            cout << "Enter h: ";cin >>h;
            c = h*2.0;
            a = sqrt(c);
            S = c*h/2.0;
            cout << "Katet (a) = " << a << '\n' << "Hypotenuse = " << c << '\n' << "S = " << S;
            break;
        case 4:
            cout << "Enter S: "; cin >> S;
            c = 2.0 * sqrt(S);
            a = sqrt(c);
            h = c/2.0;
            cout << "Katet (a) = " << a << '\n' << "Hypotenuse = " << c << '\n' << "h = " << h;
            break;
    }
    return 0;

}
