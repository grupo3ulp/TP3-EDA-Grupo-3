/*
Defina una estructura que permita cargar el día y las temperaturas máxima y mínima de ese día. Luego defina
un arreglo en el que cargara todos estos datos para un mes. Realice un programa que cargue la estructura
antes definida y calcule el promedio de temperaturas máximas y el promedio de temperaturas mínimas del
mes.
*/

#include <iostream>

using namespace std;

struct dia{
    float tempMax,tempMin;
};

int main() {

    cout<<"Que mes del anio se ingresara? (1-12)"<<endl;
    int opc;
    string mesElegido;
    cin >> opc;
    switch(opc) {
        case 1: opc=31;cout<<"Eligio el mes de Enero"<<endl;mesElegido="Enero";break;
        case 2: opc=28;cout<<"Eligio el mes de Febrero"<<endl;mesElegido="Febrero";break;
        case 3: opc=31;cout<<"Eligio el mes de Marzo"<<endl;mesElegido="Marzo";break;
        case 4: opc=30;cout<<"Eligio el mes de Abril"<<endl;mesElegido="Abril";break;
        case 5: opc=31;cout<<"Eligio el mes de Mayo"<<endl;mesElegido="Mayo";break;
        case 6: opc=30;cout<<"Eligio el mes de Junio"<<endl;mesElegido="Junio";break;
        case 7: opc=31;cout<<"Eligio el mes de Julio"<<endl;mesElegido="Julio";break;
        case 8: opc=31;cout<<"Eligio el mes de Agosto"<<endl;mesElegido="Agosto";break;
        case 9: opc=30;cout<<"Eligio el mes de Septiembre"<<endl;mesElegido="Septiembre";break;
        case 10: opc=31;cout<<"Eligio el mes de Octubre"<<endl;mesElegido="Octubre";break;
        case 11: opc=30;cout<<"Eligio el mes de Noviembre"<<endl;mesElegido="Noviembre";break;
        case 12: opc=31;cout<<"Eligio el mes de Diciembre"<<endl;mesElegido="Diciembre";break;
        default: cout<<"Opcion invalida, se tomara el mes de febrero por default"<<endl;opc=28;mesElegido="Febrero";break;
    }

    float promMax,promMin;
    dia mes[opc];

    for (int i = 0; i < opc; ++i) {
      cout<<"Minima dia "<<i+1<<":"<<endl;
      cin >> mes[i].tempMin;
      promMin+=mes[i].tempMin;
      cout<<"Maxima dia "<<i+1<<":"<<endl;
      cin >> mes[i].tempMax;
      promMax+=mes[i].tempMax;
    }

    cout<<"La temperatura maxima promedio de "<<mesElegido<< " fue: "<<promMax/opc<<endl;
    cout<<"La temperatura minima promedio de "<<mesElegido<< " fue: "<<promMin/opc<<endl;

    return 0;
}
