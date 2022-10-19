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

    InfoDireccion d1{"Colon 546","Villa Mercedes","San Luis"};
    InfoDireccion d2{"Av. 9 de julio 1056","Capital Federal","Buenos Aires"};
    Empleado e1{"Ivan Urquiza",d1,100000};
    Empleado e2{"Jose Juan Perez Gomez",d2,150000};
    Empleado empleados[2]={e1,e2};

    for (int i = 0; i < 2; ++i) {
        cout<<"Empleado "<<i+1<<":"<<endl;
        cout<<"nombre: "<<empleados[i].nombre<<".\nsalario: "<<empleados[i].salario<<".\nDireccion:\nCalle: "<<empleados[i].direccion.calle<<", ciudad: "<<empleados[i].direccion.ciudad<<" provincia: "<<empleados[i].direccion.provincia<<"."<<endl;
    }

    return 0;
}
