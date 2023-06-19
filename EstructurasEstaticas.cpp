// array, vectores, matrices, string, char, pilas, colas, map, arboles binarios,

/**
 * Estructuras Estaticas
 *
 * Son estructuras que no cambian
 *
 * arrays
 * matrices con array
 * pares
 *
 *
 * Declaracion:
 *
 * (tipo de dato) nombre[tamanio]
 *
 *
 *
 */

// /**
//  * @file EstructurasEstaticas.cpp
//  * @name Arreglos
//  */
// #include <iostream>

// using namespace std;

// int main()
// {

//     // forma de declarar
//     int array[1000];

//     // forma para agregar un valor
//     /**
//      * array[posicion] = valor
//      *
//      */
//     array[5] = -456;
//     array[0] = 0;
//     array[2] = 5;
//     array[3] = 9;

//     /**
//      * para introducir de forma dinamica hacer uso de un ciclo
//      *
//      */

//     // es para mostrar los valores en un arreglo
//     for (int i = 0; i < 10000; i++)
//     {
//         std::cout << i << " " << array[i] << endl;
//     }

//     return 0;
// }

/**
 * @file EstructurasEstaticas.cpp
 * @name Matrices Staticas
 */
#include <iostream>

using namespace std;

int main()
{

    /**
     * Declaracion:
     * (tipo de dato) nombre[nroFilas][nroColumnas]
     *
     */
    int matriz[5][5];

    // forma para agregar un valor
    /**
     * matriz[fila][columna] = valor
     *
     */

    // matriz[0][0] = 56;
    // matriz[0][1] = 2;
    // matriz[1][0] = 12;
    // matriz[1][1] = 8;

    // para introducir datos en la matriz
    // primer for es para las filas
    for (int fila = 0; fila < 5; fila++)
    {
        // segundo for es para las columnas
        for (int columna = 0; columna < 5; columna++)
        {
            // cin >> matriz[fila][columna];
            matriz[fila][columna] = fila + columna;
        }
    }

    // para mostrar la matriz
    // primer for es para las filas
    for (int fila = 0; fila < 5; fila++)
    {
        // segundo for es para las columnas
        for (int columna = 0; columna < 5; columna++)
        {
            cout << matriz[fila][columna] << " ";
        }
        cout << endl;
    }

    return 0;
}