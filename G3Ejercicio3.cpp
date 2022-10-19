#include <iostream>
using namespace std;

struct InfoDireccion{
    string calle,ciudad,provincia;
};
struct Empleado{
    string nombre;
    InfoDireccion direccion;
    double salario;
};

int main() {

    InfoDireccion d1{"Bv. Bart","Springfield","Massachusetts"};
    InfoDireccion d2{"Av. 9 de julio","Capital Federal","Buenos Aires"};
    Empleado e1{"Bart Simpson",d1,2000};
    Empleado e2{"Jose Juan Perez Gomez",d2,200000};
    Empleado empleados[2]={e1,e2};

    return 0;
}
