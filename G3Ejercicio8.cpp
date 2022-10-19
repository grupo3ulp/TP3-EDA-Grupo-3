/*Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que imprima
los datos del empleado con mayor y menor salario*/

#include <iostream>

using namespace std;

struct Empleado
{
    string nombre;
    string apellido;
    int legajo;
    double salario;
};

int main(int argc, char **argv)
{
    int n, mayor = 0, menor = 0, legajoMenor, legajoMayor;
    string nombreMayor, nombreMenor, apellidoMenor, apellidoMayor;
    double salarioMenor = 0, salarioMayor = 0;

    cout << "¿Cuántos empleados desea cargar?" << endl;
    cin >> n;

    Empleado empleados[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre del empleado" << endl;
        cin >> empleados[i].nombre;
        cout << "Ingrese el apellido del empleado" << endl;
        cin >> empleados[i].apellido;
        cout << "Ingrese el número de legajo del empleado" << endl;
        cin >> empleados[i].legajo;
        cout << "Ingrese el salario del empleado" << endl;
        cin >> empleados[i].salario;

        if (salarioMenor == 0)
        {
            salarioMenor = empleados[i].salario;
            nombreMenor = empleados[i].nombre;
            apellidoMenor = empleados[i].apellido;
            legajoMenor = empleados[i].legajo;
            salarioMenor = empleados[i].salario;
        }        else if (empleados[i].salario < salarioMenor)
        {
            salarioMenor = empleados[i].salario;
            nombreMenor = empleados[i].nombre;
            apellidoMenor = empleados[i].apellido;
            legajoMenor = empleados[i].legajo;
            salarioMenor = empleados[i].salario;
        }

        if (salarioMayor == 0)
        {
            salarioMayor = empleados[i].salario;
            nombreMayor = empleados[i].nombre;
            apellidoMayor = empleados[i].apellido;
            legajoMayor = empleados[i].legajo;
            salarioMayor = empleados[i].salario;
        }        else if (empleados[i].salario > salarioMayor)
        {
            salarioMayor = empleados[i].salario;
            nombreMayor = empleados[i].nombre;
            apellidoMayor = empleados[i].apellido;
            legajoMayor = empleados[i].legajo;
            salarioMayor = empleados[i].salario;
        }
    }

    cout << "El empleado con menor salario es: "<< endl;
    cout << "Nombre: " << nombreMenor << endl;
    cout << "Apellido: " << apellidoMenor << endl;
    cout << "Legajo: " << legajoMenor << endl;
    cout << "Salario: " << salarioMenor << endl;
    cout << "__________________________________"<< endl;

    cout << "El empleado con mayor salario es: "<< endl;
    cout << "Nombre: " << nombreMayor << endl;
    cout << "Apellido: " << apellidoMayor << endl;
    cout << "Legajo: " << legajoMayor << endl;
    cout << "Salario: " << salarioMayor << endl;
    cout << "__________________________________"<< endl;

    return 0;
}
