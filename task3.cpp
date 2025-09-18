// N3 (a)

// #include <iostream>
// using namespace std;
// double f(double x)
// {
//     if (x<=-2){
//         return 0;
//     }
//     else {
//         if (x<=10){
//             return x*x+4*x+5;
//         }
//         else{
//             return 1.0/(x*x+4*x-5);
//         }
//     }
// }


// int main()
// {
//     double x;
//     cout << "Enter x: "; cin >> x;
//     cout << "f(x) = " << f(x);
//     return 0;
// }

//N3 (b)
// #include <iostream>
// using namespace std;
// double f(double x)
// {
//     if (x<=-2){
//         return 0;
//     }
//     else {
//         if (x<=0){
//             return x*x+4*x+5;
//         }
//         else{
//             if ((x*x+4*x-5)==0){
//                 cout << "div by zero" << endl;
//             }
//             return 1.0/(x*x+4*x-5);
//         }
//     }
// }


// int main()
// {
//     double x;
//     cout << "Enter x: "; cin >> x;
//     double value = f(x);
//     cout << "f(x) = " <<  value;
//     return 0;
// }