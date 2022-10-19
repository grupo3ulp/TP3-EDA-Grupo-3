#include <iostream>
using namespace std;
struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct Persona {
    string nombre;
    int edad;
    double peso;
    Fecha fecha;
};
struct Empleado {
    Persona persona;
    double salario;
};

int main() {

    Fecha f1 = {2, 12, 1997};
    Persona p1 = {"Veronica", 20, 45, f1};

    Fecha f2 = {22, 7, 1998};
    Persona p2 = {"Esteban", 19, 60, f2};
    Empleado e = {p2, 50000};
    
    cout<<"Persona 1:"<<endl;
    cout<<"Nombre: "<<p1.nombre<<"\nEdad: "<<p1.edad<<"\npeso: "<<p1.peso<< "\nFecha nacimiento: "<< p1.fecha.dia<<"/"<<p1.fecha.mes<<"/"<<p1.fecha.anio<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Empleado 1:"<<endl;
    cout<<"Nombre: "<<e.persona.nombre<<"\nEdad: "<<e.persona.edad<<"\npeso: "<<e.persona.peso<< "\nFecha nacimiento: "<< e.persona.fecha.dia<<"/"<<e.persona.fecha.mes<<"/"<<e.persona.fecha.anio<<"\nSalario: "<<e.salario<<endl;

    return 0;
}
