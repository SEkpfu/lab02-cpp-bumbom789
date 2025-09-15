#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter first, second, third numbers: ";
    cin >> a >> b >> c;
    int sum {};
    if (a>10) sum+=a;
    if (b>10) sum+=b;
    if (c>10) sum +=c;
    cout << "Sum > 10: " << sum << endl;
    int ch{};
    if ((a%2)==0) ch+=1;
    if ((b%2)==0) ch+=1;
    if ((c%2)==0) ch+=1;
    cout << "Even: " << ch << endl;
    int m = a+b+c;
    cout << "Middle: " << (m- max(max(a,b),c) - min(min(a,b),c))<< endl;
    int Min = min(min(a,b),c);
    if (a == Min) cout << "Min = first number (1) ";
    if (b == Min) cout << "Min = second number (2)" ;
    if (c == Min) cout << "Min = third number (3)";
    return 0;
}