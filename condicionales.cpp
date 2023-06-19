// un libreria
#include <bits/stdc++.h> // esta libreria tiene las librerias necesarias para la competencia

using namespace std;

// funcion principal
int main()
{
    // sentencias de decision
    // IF/ELSE
    // if (/* condition */) // si no cumple la condicion se va por el else || dentro de la condicion solo acepta valores de true o false
    // {
    //     /* code */
    // }
    // else
    // {
    //     /* code */
    // }

    // OPERADORES LOGICOS
    /*
     * && , and
     * || , or
     * ! => diferente
     *
     */

    // Otros operadores
    /**
     *
     * Mayor >
     * Menor <
     * igual ==
     * Mayour igual >=
     * Menor igual <=
     * Diferente igual !=
     *
     */

    // cin no permite introducir por teclado( consola )
    /* int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "A es mayor\n";
    }
    else
    {
        cout << "B es mayor\n";
    } */

    // SENTENCIA SWITCH
    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    // case /* constant-expression */:
    //     /* code */
    //     break;
    // case /* constant-expression */:
    //     /* code */
    //     break;
    // case /* constant-expression */:
    //     /* code */
    //     break;

    // default:
    //     break;
    // }

    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "el numero introducido es 1\n";
        break;
    case 2:
        cout << "el numero introducido es 2\n";
        break;
    case 3:
        cout << "el numero introducido es 3\n";
        break;
    case 4:
        cout << "el numero introducido es 4\n";
        break;

    default:
        cout << "es otro numero que no esta en los caso\n";
        break;
    }

    return 0;
}