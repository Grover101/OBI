#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // struct Persona
    // {
    //     string nombre;
    //     int edad;
    //     float altura;
    //     float peso;
    //     string ciudad;
    //     string ci;
    // };

    // int a;
    // Persona alumnos[10];

    // vector<Persona> alumn;
    // Persona al1;
    // al1.nombre = "hola";
    // alumn.push_back(al1);

    // alumnos[0]
    //     .nombre = "Marco";
    // alumnos[0].ci = "126546542CH";

    // alumnos[1].nombre = "MING";
    // alumnos[1].ci = "126546542CH";

    // alumnos[2].nombre = "FANG";
    // alumnos[2].ci = "126546542CH";

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << alumnos[i].nombre << endl;
    // }

    struct Nodo
    {
        int valor;
        Nodo *izquierda;
        Nodo *derecha;
    };

    Nodo raiz;

    raiz.derecha->derecha->derecha->izquierda->valor = 5;

    return 0;
}