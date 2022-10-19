/*Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre,
país, numero_medallas. En el main pedir que digite el número de atletas, y a medida que los carga, devuelva
los datos (Nombre, país) del atleta que ha ganado el mayor ‘número de medallas’*/


#include <iostream>
using namespace std;

struct Atleta{
string nombre;
string pais;
int numero_medallas;
};

int main(int argc, char **argv)
{
    int n, mayorMedallas = 0;
    string mayorNombre, mayorPais;

    cout << "¿Cuántos atletas desea cargar?" << endl;
    cin >> n;

    Atleta atletas[n];

    for (int i = 0; i < n; i++)    {
        cout << "Ingrese el nombre del atleta" << endl;
        cin >> atletas[i].nombre;
        cout << "Ingrese el país del atleta" << endl;
        cin >> atletas[i].pais;
        cout << "Ingrese el número de medallas del atleta" << endl;
        cin >> atletas[i].numero_medallas;

        if (mayorMedallas == 0) {
            mayorMedallas = atletas[i].numero_medallas;
            mayorNombre = atletas[i].nombre;
            mayorPais = atletas[i].pais;
            
        } else if(atletas[i].numero_medallas > mayorMedallas) {
            mayorMedallas = atletas[i].numero_medallas;
            mayorNombre = atletas[i].nombre;
            mayorPais = atletas[i].pais;
        }

    cout << "________________________________________"<< endl;
    cout << "El atleta con más medallas ingresadas es: "<< endl;
    cout << "Nombre: " << mayorNombre << endl;
    cout << "País: " << mayorPais << endl;
    cout << "Cantidad de medallas: " << mayorMedallas << endl;
    cout << "________________________________________"<< endl;

    }

    return 0;
}
