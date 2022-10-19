/**Declare una estructura llamada struct DiscoCompacto, que guarde el título, artista, numero de canciones,
precio, año de lanzamiento. Use typedef para declarar el alias del struct como CD.
Declare 3 variables de tipo DiscoCompacto, dos globales y una local al main.
Iterar usando strlen para mostrar el nombre de cada artista, solo si la longitud del artista, si es mayor a 10
letras. Luego compare si dos títulos son del mismo artista.*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct discoCompacto{
    string titulo;
    const char *artista;
    int canciones;
    double precio;
    int lanzamiento;
}CD;

int main() {
    CD cd1 = {"Relapse", "Eminem", 20, 15000, 2009};
    CD cd2 = {"Night Visions", "ImagineDragons", 12, 12000, 2012};
    CD cd3 = {"Evolve", "ImagineDragons", 11, 18000, 2017};

    CD cds[3] = {cd1,cd2,cd3};

    cout<<"Los artistas con mas de 10 letras en el nombre son:"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    for (int i = 0; i < 3; ++i) {
        if(strlen(cds[i].artista)>10){
            cout <<cds[i].artista<< endl;
        }
    }
    cout<<"---------------------------------------------------"<<endl;

    if (cds[0].artista == cds[1].artista || cds[0].artista == cds[2].artista || cds[1].artista == cds[2].artista){
        cout<<"Hay por lo menos 2 cds del mismo artista"<<endl;
    }

    return 0;
}

 