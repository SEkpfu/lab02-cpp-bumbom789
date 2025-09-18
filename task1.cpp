
// N1 (a,b)
// #include <iostream>
// using namespace std;
// int main()
// {
//     double a1, b1, a2, b2;
//     cout << "Enter the sides of the first rectangle \n";
//     cout << "a1= "; cin >> a1;
//     cout << "b1= "; cin >> b1;
//     cout << "Enter the sides of the second rectangle \n";
//     cout << "a2= "; cin >> a2;
//     cout << "b2= "; cin >> b2;
//     double s1, s2;
//     s1 = a1 * b1;
//     s2 = a2 * b2;
//     if (s1==s2)
//         cout << "s1 = s2 = " << s1;
//     else
//         if (s1 > s2)
//             cout << "maxS = s1 = " << s1;
//         else
//             cout << "maxS = s2 = " << s2;
//     return 0;
// }

// N1 (c) if 
// #include <iostream>
// using namespace std;
// int main()
// {
//     double a1, b1, a2, b2, a3, b3;
//     cout << "Enter the sides of the first rectangle \n";
//     cout << "a1= "; cin >> a1;
//     cout << "b1= "; cin >> b1;
//     cout << "Enter the sides of the second rectangle \n";
//     cout << "a2= "; cin >> a2;
//     cout << "b2= "; cin >> b2;
//     cout << "Enter the sides of the third rectangle \n";
//     cout << "a3= "; cin >> a3;
//     cout << "b3= "; cin >> b3;
//     double s1, s2,s3;
//     s1 = a1 * b1;
//     s2 = a2 * b2;
//     s3 = a3*b3;
//     if (s1==s2 && s2==s3)
//         cout << "s1 = s2 = s3 = " << s1;
//     else{
//         if (s1 > s2 && s1>s3)
//             cout << "maxS = s1 = " << s1;
//         if (s2>s1 && s2>s3)
//             cout << "maxS = s2 = " << s2;
//         if (s3>s1 && s3>s2)
//             cout << "maxS = s3 = " << s3;
//     }
//     return 0;
// }

// N1 (c) ?:
// #include <iostream>
// using namespace std;
// int main()
// {
//     double a1, b1, a2, b2, a3, b3;
//     cout << "Enter the sides of the first rectangle \n";
//     cout << "a1= "; cin >> a1;
//     cout << "b1= "; cin >> b1;
//     cout << "Enter the sides of the second rectangle \n";
//     cout << "a2= "; cin >> a2;
//     cout << "b2= "; cin >> b2;
//     cout << "Enter the sides of the third rectangle \n";
//     cout << "a3= "; cin >> a3;
//     cout << "b3= "; cin >> b3;
//     double s1, s2,s3;
//     s1 = a1 * b1;
//     s2 = a2 * b2;
//     s3 = a3*b3;
//     (s1 >s2 && s1>s3) ? cout << "maxS = s1 = " << s1 : ((s2>s3 && s2>s1) ? cout << "maxS = s2 = " << s2 : cout << "maxS = s3 = " << s3);
//     return 0;
// }

// N1 (c) max()
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a1, b1, a2, b2, a3, b3;
    cout << "Enter the sides of the first rectangle \n";
    cout << "a1= "; cin >> a1;
    cout << "b1= "; cin >> b1;
    cout << "Enter the sides of the second rectangle \n";
    cout << "a2= "; cin >> a2;
    cout << "b2= "; cin >> b2;
    cout << "Enter the sides of the third rectangle \n";
    cout << "a3= "; cin >> a3;
    cout << "b3= "; cin >> b3;
    double s1, s2,s3;
    s1 = a1 * b1;
    s2 = a2 * b2;
    s3 = a3*b3;
    cout << "maxS = " << max(max(s1,s2),s3);
    return 0;
}