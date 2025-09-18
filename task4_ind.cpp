#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int litr;
    string okonch;
    cout << "Enter litr: "; cin >> litr;
    if (litr %10 == 1 && litr %100 != 11){
        okonch = "";
    }
    else {
        if (litr %10 >=2 && litr %10 <=4 && (litr %100 <10 || litr %100 >=20)){
            okonch = "a";
        }   
        else {
            okonch = "ов";
        }
    }
    cout << "Друзья выпили " << litr << " литр" << okonch;
    return 0;
}
