#include <iostream>
using namespace std;
string getAgeWord(int age) {
    int lastDigit = age % 10;
    int lastTwoDigits = age % 100;
    
    if (lastTwoDigits >= 11 && lastTwoDigits <= 14) {
        return "лет";
    } else if (lastDigit == 1) {
        return "год";
    } else if (lastDigit >= 2 && lastDigit <= 4) {
        return "года";
    } else {
        return "лет";
    }
}
int main()
{
    setlocale(LC_ALL, "");
    int bday,bmonth,byear;
    cout << "Введите дату рождения (день, месяц, год): " << endl;
    cin >> bday >> bmonth >> byear;
    int day,month,year;
    cout << "Введите текущую дату (день, месяц, год): ";
    cin >> day >> month >> year;
    int age;
    if ((month < bmonth)||((month == bmonth) && (day <bday))){
        age = year - byear - 1;
    }
    else{
        age = year - byear;
    }
    cout << "Вам " << age << " " << getAgeWord(age);
    return 0;
}