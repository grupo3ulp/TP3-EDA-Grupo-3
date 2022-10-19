#include <iostream>
#include <string>
using namespace std;

//Ejercicio 5: Hacer un programa en C++ para registrar los datos de tres libros como: título, autor, año y color del libro. El
//color se deberá hacer mediante una enumeración y sólo habrá rojo, verde y azul.

enum color{ROJO, VERDE, AZUL, SINCOLOR};

string enum_to_string(color tipo) {
    switch (tipo) {
        case 0:
            return "Rojo";
        case 1:
            return "Verde";
        case 2:
            return "Azul";
        case 3:
            return "Sin color";

    }
}

typedef struct libro{
    string titulo;
    string autor;
    int anio;
    color color;
}L ;
int main() {
    L libros[3];
    string t, a;
    int an, op;
    color c;
    for (int i = 0; i < 3; ++i) {
        cout<<"Ingrese el nombre del libro "<<i + 1<<endl;
        getline(cin,t);
        cout<<"Ingrese el autor del libro "<<i + 1<<endl;
        getline(cin,a);
        cout<<"Ingrese en que anio salio el libro "<<i + 1<<endl;
        cin>>an;
        cout<<"Ingrese de que color es el libro "<<i + 1<<endl;
        cout<<"1: Rojo"<<endl;
        cout<<"2: Verde"<<endl;
        cout<<"3: Azul"<<endl;
        cout<<"Cualquier otro valor que ingrese se tomara como sincolor"<<endl;
        cin>>op;
        switch (op) {
            case 1:
                c = ROJO;
                break;
            case 2:
                c = VERDE;
                break;
            case 3:
                c = AZUL;
                break;
            default:
                c = SINCOLOR;
                break;
        }
        libros[i].titulo = t;
        libros[i].autor = a;
        libros[i].anio = an;
        libros[i].color = c;
        cout<<"----------------------------------------"<<endl;
        getline(cin, t);
    }
    for (int i = 0; i < 3; ++i) {
        cout<<"Titulo: "<<libros[i].titulo<<endl;
        cout<<"Autor: "<<libros[i].autor<<endl;
        cout<<"Publicacion: "<<libros[i].anio<<endl;
        cout<<"Color: "<<enum_to_string(libros[i].color)<<endl;
        cout<<"----------------------------------------"<<endl;
    }
    return 0;
}
