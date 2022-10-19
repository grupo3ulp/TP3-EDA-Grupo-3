#include <iostream>
#include <string>
#include <string.h>
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
    cout<<"-------------------------------------"<<endl;
    cout<<"El alumno con el mejor promedio es: "<<endl;
    cout<<"Nombre: "<<mvp.nombre<<endl;
    cout<<"Edad: "<<mvp.edad<<endl;
    cout<<"Promedio: "<<mvp.promedio<<endl;
    cout<<"-------------------------------------"<<endl;

    //Aca convertimos los nombres que son strings a const char asi se puede usar el strcasecmp

    const char * nom1 = estudiantes[0].nombre.c_str();
    const char * nom2 = estudiantes[1].nombre.c_str();
    const char * nom3 = estudiantes[2].nombre.c_str();

    if (strcasecmp(nom1,nom2) == 0 || strcasecmp(nom1,nom3) == 0 || strcasecmp(nom3,nom2) == 0){
        cout<<"Hay por lo menos dos alumnos con el mismo nombre"<<endl;
    }else{
        cout<<"Todos los alumnos tienen nombres distintos"<<endl;
    }
    return 0;
}
