#include <iostream>
#include <string>
using namespace std;

//Ejercicio 6: . Hacer una estructura llamada Corredor, en la cual se tendrán los siguientes campos: Nombre, edad, sexo,
//club, pedir datos al usuario para un corredor, y asignarle una Categoría de competición (use strcpy para copiar
//a la variable) según sea:
//- Juvenil menor o = 18 años
//- Señor menor o = 40 años
//- Veterano mayor a 40 años
//Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición.

typedef struct corredor{
    string nombre;
    int edad;
    string sexo;
    string club;
    string categoria = "por definir";
}C;

int main() {
    string n, s, c;
    int e;
    cout<<"Ingrese el nombre del corredor"<<endl;
    getline(cin, n);
    cout<<"Ingrese el sexo del corredor"<<endl;
    getline(cin, s);
    cout<<"Ingrese el club del corredor"<<endl;
    getline(cin, c);
    cout<<"Ingrese la edad del corredor"<<endl;
    cin>>e;
    C c1 = {n,e,s,c};
    if (c1.edad<= 18){
        c1.categoria = "Juvenil";
    }else if(c1.edad>40){
        c1.categoria = "Veterano";
    }else{
        c1.categoria = "Senior";
    }

    cout<<"Datos del Corredor"<<endl;
    cout<<"------------------"<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<c1.categoria<<endl;
    return 0;
}
