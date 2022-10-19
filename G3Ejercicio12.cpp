/*
Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: el
nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las
personas que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad.
 */

#include <iostream>
using namespace std;

struct Persona{
    string nombre;
    bool tieneDiscapacidad;
};

int main() {

    int cantPersonas;
    cout<<"Cuantas personas va a ingresar?"<<endl;
    cin>>cantPersonas;
    Persona todasLasPersonas[cantPersonas];

    bool discAux;
    int personasConDiscAux=0;
    int personasSinDiscAux=0;
    string nomAux;


    for(int i=0;i<cantPersonas;i++) {
        cout<<"Ingrese nombre de persona "<<i+1<<endl;
        cin>>nomAux;
        cout<<"Tiene discapacidad?. 0 = NO, 1 = SI"<<endl;
        cin >>discAux;
        discAux?++personasConDiscAux:++personasSinDiscAux;
        todasLasPersonas[i]={nomAux, discAux};
    }

    Persona personasConDisc[personasConDiscAux];
    Persona personasSinDisc[personasSinDiscAux];

    int pd=0,pn=0; //Variable auxiliar para llenado de subvectores.

    for (int i = 0; i < cantPersonas; ++i) {
        if(todasLasPersonas[i].tieneDiscapacidad)
        {
            personasConDisc[pd]={todasLasPersonas[i].nombre, todasLasPersonas[i].tieneDiscapacidad};
            pd++;
        }
        else{
            personasSinDisc[pn]={todasLasPersonas[i].nombre, todasLasPersonas[i].tieneDiscapacidad};
            pn++;
        }
    }

    cout<<"Todas las personas: "<<endl;

    for (int i = 0; i < cantPersonas; i++) {
        cout << "Nombre: " << todasLasPersonas[i].nombre << ". ";
        if (!todasLasPersonas[i].tieneDiscapacidad) {
        cout << "No tiene discapacidad." << endl;
    }
        else cout<<"Tiene discapacidad."<<endl;
    }

    cout<<"----------------------------------------------------------------"<<endl;

    cout<<"Personas con discapacidad: "<<endl;
        for (int i = 0; i < personasConDiscAux; i++) {
            cout << " - " << personasConDisc[i].nombre << endl;

        }
    cout<<"----------------------------------------------------------------"<<endl;

    cout<<"Personas sin discapacidad: "<<endl;
        for (int i = 0; i < personasSinDiscAux; i++) {
            cout << " - " << personasSinDisc[i].nombre << endl;
        }

    return 0;
}
