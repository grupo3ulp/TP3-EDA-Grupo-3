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

    return 0;
}
