#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
    double v,h;
    cout << "Enter v: "; cin >> v;
    if (v<=-2){
        h = sqrt(v*v+(1.0/v));
    }
    else {
        if (v>=2){
            h = 10.0/(M_PI*v);
        }
        else{
            h =(v+1.0)*(v+1.0);
        }
    }
    cout << "h = " << h;
    return 0;
}
