#include <iostream>
#include <string>
#include <string.h>
using namespace std;

//Ejercicio 10: Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3; y otro
//llamada alumno que tendrá los siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio
//este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio,
//y por último imprimir todos sus datos incluidos el promedio. Calcular cuál de 2 alumnos tiene el mejor
//promedio, y mostrar el nombre.

typedef struct promedio{
    double n1;
    double n2;
    double n3;
}P;
typedef struct alumno{
    string nombre;
    string sexo;
    int edad;
    promedio promedio;
}A;
int main() {
    A alumnos[2];
    P promedios[2];
    A mvp;
    int aux = 0;
    string n, s;
    int e;
    double n1, n2, n3, p;
    for (int i = 0; i < 2; ++i) {
        cout<<"Ingrese el nombre del alumno"<<endl;
        getline(cin, n);
        cout<<"Ingrese el sexo del alumno"<<endl;
        getline(cin, s);
        cout<<"Ingrese la edad del alumno"<<endl;
        cin>>e;
        cout<<"Ingrese las 3 notas del alumno"<<endl;
        cin>>n1;
        cin>>n2;
        cin>>n3;
        promedios[i]={n1,n2,n3};
        alumnos[i]={n,s,e,promedios[i]};
        p = (n1 + n2 + n3) / 3;
        cout<<"-------------------------------------"<<endl;
        cout<<"Datos del alumno "<<i+1<<endl;
        cout<<"Nombre: "<<alumnos[i].nombre<<endl;
        cout<<"Sexo: "<<alumnos[i].sexo<<endl;
        cout<<"Edad: "<<alumnos[i].edad<<endl;
        cout<<"Promedio: "<<p<<endl;
        cout<<"-------------------------------------"<<endl;
        if (p>aux){
            mvp = alumnos[i];
            aux = p;
        }
        getline(cin, n);
    }
    cout<<"-------------------------------------"<<endl;
    cout<<"El alumno con el mejor promedio es: "<<endl;
    cout<<"Nombre: "<<mvp.nombre<<endl;
    cout<<"-------------------------------------"<<endl;

    return 0;
}
