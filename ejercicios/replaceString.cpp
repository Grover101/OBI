#include <bits/stdc++.h>

using namespace std;

/**
 * input
 *
 * Oracion = "Hola mundo, como estas"
 * Reemplazo = "Jose"
 * PorCual = "mundo"
 *
 * Output
 *
 * "Hola Jose, como estas" => solo si encuentra
 *
 * caso constrario solo mostra la oracion
 *
 */

int main()
{
    string cadena, reemplazo, palabra;
    getline(cin, cadena);
    getline(cin, reemplazo);
    getline(cin, palabra);

    int find = cadena.find(palabra);
    if (find != -1)
    {
        string newCadena = cadena.replace(cadena.find(palabra), palabra.size(), reemplazo);
        cout << newCadena << endl;
    }
    else
        cout << cadena << endl;
    return 0;
}