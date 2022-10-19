#include <iostream>
using namespace std;

struct profesor{
    string nombre,cargo,materia;
    int cargaHoraria;
}p1{"Cristina","Titular","Gestion de datos",20},p2{"Fabiana","Jefa TP","Matematica",15};

int main() {

    cout<<p1.nombre+" "+p1.materia<<endl;
    cout<<p2.nombre+" "+p2.materia<<endl;

    return 0;
}
