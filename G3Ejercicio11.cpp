#include <iostream>
using namespace std;

//Ejercicio 11: Defina una estructura Etapa, que indique el tiempo empleado por un ciclista en una etapa. Debe tener tres
//campos: horas, minutos y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado
//en correr todas las etapas.

typedef struct etapa{
    double horas;
    double minutos = horas * 60;
    double segundos = minutos * 60;
}E;
int main() {
    int n;
    double he;
    cout<<"Ingrese cuantas etapas tiene la pista"<<endl;
    cin>>n;
    cout<<"Ingrese cuantas horas dura una etapa"<<endl;
    cin>>he;
    E c1 = {he*n};

    cout<<"-----------------------------------------------"<<endl;
    cout<<"la carrera dura: "<<c1.horas<<" horas, o "<<c1.minutos<<" minutos, o "<<c1.segundos<<" segundos"<<endl;
    return 0;
}
