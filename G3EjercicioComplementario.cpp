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
    /*Creado de Persona 1*/
    Fecha f1 = {2, 12, 1997};
    Persona p1 = {"Veronica", 20, 45, f1};
    /*Creado de Persona 2*/
    Fecha f2 = {22, 7, 1998};
    Persona p2 = {"Esteban", 19, 60, f2};
    Empleado e1 = {p2, 50000};
    /*Creado de Persona 3*/
    Fecha f3 = {9, 8, 1998};
    Persona p3 = {"Dante", 24, 58, f3};
    Empleado e2 = {p3, 60000};
    /*Creado de Persona 4*/
    Fecha f4 = {12, 8, 2000};
    Persona p4 = {"Roberto", 22, 101, f4};
    Empleado e3 = {p4, 90000};

    Empleado empleados[] = {e1, e2, e3};

    int longitud = sizeof(empleados) / sizeof(empleados[0]);
    /*Mostrando Personas*/
    cout << "Mostrando Personas" << endl;
    cout << "Persona 1" << endl;
    cout << "Nombre: " << p1.nombre << endl;
    cout << "Edad: " << p1.edad << endl;
    cout << "Peso: " << p1.peso << endl;
    cout << "Fecha de Nacimiento: " << f1.dia << "/" << f1.mes << "/" << f1.anio << endl;
    cout << "------------------------" << endl;

    cout << "Persona 2" << endl;
    cout << "Nombre: " << p2.nombre << endl;
    cout << "Edad: " << p2.edad << endl;
    cout << "Peso: " << p2.peso << endl;
    cout << "Fecha de Nacimiento: " << f2.dia << "/" << f2.mes << "/" << f2.anio << endl;
    cout << endl;
    cout << "========================" << endl;
    /*Mostrando Empleados*/
    cout << endl;
    cout << "Mostrando Empleados" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Empleado " << (i + 1) << endl;
        cout << "Nombre: " << empleados[i].persona.nombre << endl;
        cout << "Edad: " << empleados[i].persona.edad << endl;
        cout << "Peso: " << empleados[i].persona.peso << endl;
        cout << "Fecha de Nacimiento: " << empleados[i].persona.fecha.dia << "/" << empleados[i].persona.fecha.mes <<
             "/" << empleados[i].persona.fecha.anio << endl;
        cout << "Salario: $" << empleados[i].salario << endl;
        cout << "------------------------" << endl;
    }

    return 0;
}
