#include <iostream>
using namespace std;
int main()
{
    double week,day;
    cout  << "Enter the day of the month: "; cin >> day;
    cout  << "Enter day of the week: "; cin >> week;
    if (day == 13){
        if (week==2 || week ==5){
            cout << "Unlucky day";
        }
    }
    if (day ==17 && week ==5)
        cout << "Unlucky day";
    return 0;
}