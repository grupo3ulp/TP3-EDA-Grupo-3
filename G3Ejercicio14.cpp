#include <iostream>

using namespace std;

enum Sector {
    BAZAR, ACCESORIOS, INDUMENTARIA, CALZADOS
};

string enum_to_string(Sector tipo) {
    switch (tipo) {
        case 0:
            return "BAZAR";
        case 1:
            return "ACCESORIOS";
        case 2:
            return "INDUMENTARIA";
        case 3:
            return "CALZADOS";

    }
}

struct Empleado {
    string nombre;
    int legajo;
    Sector sector;
    int ventasDiarias;
    int ventasTotales = ventasDiarias * 7;
};

struct Premiados {
    string sector;
    int legajo;
    int totalDeVentas;
};

int main() {
    int legajo = 1;
    Empleado e1 = {"Juan", legajo++, BAZAR, 1};
    Empleado e2 = {"Luis", legajo++, BAZAR, 8};
    Empleado e3 = {"Fernando", legajo++, ACCESORIOS, 3};
    Empleado e4 = {"Mariano", legajo++, ACCESORIOS, 5};
    Empleado e5 = {"Cristina", legajo++, INDUMENTARIA, 10};
    Empleado e6 = {"Sebastian", legajo++, INDUMENTARIA, 12};
    Empleado e7 = {"Viviana", legajo++, CALZADOS, 15};
    Empleado e8 = {"Lucas", legajo++, CALZADOS, 9};
    Empleado e9 = {"Marco", legajo++, BAZAR, 2};
    Empleado e10 = {"Luna", legajo++, BAZAR, 20};
    Empleado e11 = {"Dante", legajo++, ACCESORIOS, 21};
    Empleado e12 = {"Lucas", legajo++, ACCESORIOS, 50};
    Empleado e13 = {"Angel", legajo++, INDUMENTARIA, 8};
    Empleado e14 = {"Wally", legajo++, INDUMENTARIA, 1};
    Empleado e15 = {"Pepe", legajo++, CALZADOS, 13};
    Empleado e16 = {"Roberto ", legajo++, CALZADOS, 11};
    Empleado e17 = {"Martin", legajo++, INDUMENTARIA, 15};
    Empleado e18 = {"Diego", legajo++, INDUMENTARIA, 9};
    Empleado e19 = {"Martina", legajo++, CALZADOS, 6};
    Empleado e20 = {"Luka", legajo++, CALZADOS, 2};

    Empleado empleados[20] = {e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11,
                              e12, e13, e14, e15, e16, e17, e18, e19, e20};

    Premiados premiados[4];
    int longitud = sizeof(empleados) / sizeof(empleados[0]);

    int pB = 0, pA = 0, pI = 0, pC = 0, sum = 0;
    premiados[0].sector = enum_to_string(BAZAR);
    premiados[1].sector = enum_to_string(ACCESORIOS);
    premiados[2].sector = enum_to_string(INDUMENTARIA);
    premiados[3].sector = enum_to_string(CALZADOS);

    for (int i = 0; i < longitud; ++i) {
        sum += empleados[i].ventasTotales;

        if (empleados[i].sector == 0) {
            if (empleados[i].ventasTotales > pB) {
                pB = empleados[i].ventasTotales;
                premiados[0].legajo = empleados[i].legajo;
                premiados[0].totalDeVentas = empleados[i].ventasTotales;
            }
        } else if (empleados[i].sector == 1) {
            if (empleados[i].ventasTotales > pA) {
                pA = empleados[i].ventasTotales;
                premiados[1].legajo = empleados[i].legajo;
                premiados[1].totalDeVentas = empleados[i].ventasTotales;
            }
        } else if (empleados[i].sector == 2) {
            if (empleados[i].ventasTotales > pI) {
                pI = empleados[i].ventasTotales;
                premiados[2].legajo = empleados[i].legajo;
                premiados[2].totalDeVentas = empleados[i].ventasTotales;
            }
        } else {
            if (empleados[i].ventasTotales > pC) {
                pC = empleados[i].ventasTotales;
                premiados[3].legajo = empleados[i].legajo;
                premiados[3].totalDeVentas = empleados[i].ventasTotales;
            }
        }
    }
    for (int i = 0; i < 4; ++i) {
        cout << "Premiados" << endl;
        cout << "Sector: " << premiados[i].sector << endl;
        cout << "Legajo: " << premiados[i].legajo << endl;
        cout << "Total de Ventas: " << premiados[i].totalDeVentas << endl;
        cout << "--------------------------------" << endl;
    }
    cout << endl;
    cout << "EMPLEADOS" << endl;
    cout << endl;

    for (int i = 0; i < longitud; ++i) {
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Legajo : " << empleados[i].legajo << endl;
        cout << "Sector : " << enum_to_string(empleados[i].sector) << endl;
        cout << "Ventas Diarias: " << empleados[i].ventasDiarias << endl;
        cout << "Ventas Totales: " << empleados[i].ventasTotales << endl;
        cout << "--------------------------------" << endl;
    }
    cout << "La cantidad de ventas totales de la empresa son :" << sum << endl;

    return 0;
}
