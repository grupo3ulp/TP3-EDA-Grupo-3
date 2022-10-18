/**Declare una estructura llamada struct DiscoCompacto, que guarde el título, artista, numero de canciones,
precio, año de lanzamiento. Use typedef para declarar el alias del struct como CD.
Declare 3 variables de tipo DiscoCompacto, dos globales y una local al main.
Iterar usando strlen para mostrar el nombre de cada artista, solo si la longitud del artista, si es mayor a 10
letras. Luego compare si dos títulos son del mismo artista.*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct DiscoCompacto{
    char titulo [20];
    char artista [20];
    int numero_canciones;
    double precio;
    char anio_lanzamiento [20];
} CD;

int main(int argc, char **argv){

    CD CD1 = {"Berserker", "Amon Amarth", 12, 220.50, "03-05-2019"}; 
    CD CD2 = {"Panorama", "Hayley Kiyoko", 13, 350.00, "29-07-2022"};
    CD CD3 = {"Killers", "Iron Maiden", 10, 240.00, "02-02-1981"};

    cout << "Artistas cuyos nombres tienen más de 10 letras:" << endl;

    if (strlen(CD1.artista) > 10){
        cout << CD1.artista << endl;
    }

    if (strlen(CD2.artista) > 10){
        cout << CD2.artista << endl;
    }

    if (strlen(CD3.artista) > 10){
        cout << CD3.artista << endl;
    }
    

return 0; }

 