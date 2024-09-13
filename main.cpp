#include <iostream>
#include <string>
#include "date.h"

int main(){
    int d;
    int m;
    int y;

    cout << "Ingrese el día: ";
    cin >> d;

    cout << "Ingrese el mes: ";
    cin >> m;

    cout << "Ingrese el año: ";
    cin >> y;

    fecha myDate(m,d,y);

    myDate.MostrarFecha();
    return 0;
}

