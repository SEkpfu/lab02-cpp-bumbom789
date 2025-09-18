#include <iostream>
using namespace std;
int main()
{
    double x,y,z;
    cout << "Enter x, y, z: "; cin >> x >> y >> z;
    if ((x+y > z) && (x+z>y) && (z+y > x)){
        if  ((x==y)&&(y==z)){
            cout << "Triangle is equilateral";
        }
        else{
            if ((x==y)||(x==z)||(z==y)){
                cout << "Triangle is isosceles";
            }
        }
        if (((x*x+y*y)==(z*z))|| ((x*x+z*z)==(y*y))||((y*y+z*z)==(x*x))){
            cout << "Triangle is right-angled";
        }
    }
    else{
        cout << "Triangle with given sides doesn't exist";
    }
    return 0;
}