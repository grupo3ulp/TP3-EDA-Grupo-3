#include <iostream>
#include <string>
using namespace std;

//Ejercicio 7: Hacer una estructura llamada estudiante, en la cual se tendrán los siguientes Campos: Nombre, edad,
//promedio, pedir datos al usuario para 3 estudiantes, comprobar cuál de los 3 tiene el mejor promedio y
//posteriormente imprimir los datos del alumno. Use strcasecmp para comparar las cadenas y determinar si
//sus nombres son iguales. Ej> Marco Sosa y Marco Perez

typedef struct estudiante{
    string nombre;
    int edad;
    double promedio;
}E;
int main() {
    E estudiantes[3];
    E mvp;
    int aux = 0;
    string n;
    int e;
    double n1, n2, n3;
    for (int i = 0; i < 3; ++i) {
        cout<<"Ingrese el nombre del estudiante"<<endl;
        getline(cin, n);
        cout<<"Ingrese la edad del estudiante"<<endl;
        cin>>e;
        cout<<"Ingrese las 3 notas del estudiante"<<endl;
        cin>>n1;
        cin>>n2;
        cin>>n3;
        estudiantes[i]={n,e,(n1 + n2 + n3) / 3};
        if (estudiantes[i].promedio>aux){
            mvp = estudiantes[i];
            aux = estudiantes[i].promedio;
        }
        getline(cin, n);
    }
    cout<<"El alumno con el mejor promedio es: "<<endl;
    cout<<"Nombre: "<<mvp.nombre<<endl;
    cout<<"Edad: "<<mvp.edad<<endl;
    cout<<"Promedio: "<<mvp.promedio<<endl;

    return 0;
}
