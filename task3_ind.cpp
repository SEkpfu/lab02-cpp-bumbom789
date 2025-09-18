//N3 v11
#include <iostream>
using namespace std;
int main()
{
    double x,y;
    cout << "Enter x, y: "; cin >> x >> y;
    bool obl1 = (((2*x+4)>=y)&& (y>=0)&&(x<=0));
    bool obl2 = ((x*x+y*y<=16)&& (x>=0)&& (y>=0));
    bool obl3 = ((x*x+y*y<=16)&& (x>=2));
    if (obl1||obl2||obl3)
        cout << "Belongs";
    else
        cout << "Doesn't belong";
    return 0;
}
