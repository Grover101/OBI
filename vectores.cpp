#include <bits/stdc++.h>

using namespace std;

int main()
{

    /**
     * @brief Pair || Pares
     *
     * pair <tipo de dato para el first, tipo de dato para el second> pares;
     *
     */

    // pair<int, string> pares;

    // pares.first = 15;
    // pares.second = "hola";

    // pair<int, string> pares2[10];

    // pares2[0].first = 5;
    // pares2[0].second = "precios";

    // cout << pares.first << "  " << pares.second << endl;

    /**
     * @brief vectores
     *
     * libreria
     * #include <vector.h>
     *
     * vector<tipo de dato> vec;
     *
     */
    // int array[10];

    // declaracion
    vector<int> vec;

    for (int i = 1; i <= 10; i++)
    {
        // int a;
        // cin >> a;
        vec.push_back(i);
    }

    // cout << vec.size() << endl;

    // cout << vec[2] << endl;
    // cout << vec[5] << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // .front() devuelve el primer valor del vector
    // .back() devuelve el ultimo valor del vector
    // cout << endl
    //      << vec.front() << endl;
    // cout << vec.back() << endl;

    // Empty
    // 1. usando el .size() si da 0 esta vacio
    // 2. .emtpy() les restorna true si es vacio, false si tiene elementos

    // Borrar todo el vector
    // .clear() eliminar todos los elementos del vector

    // Insertar un valor en una posicion
    // .insert(posicion, cantidad, valor)

    // vec.insert(vec.begin() + 2, 1, 159);

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;

    // Borrar la ultima posicion  del vector
    // vec.pop_back();

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;

    /**
     * @brief Swap
     * o Intercambio
     *
     */

    // int a = 23;
    // int b = 10;

    // cout << a << " " << b << endl;

    // swap(a, b);

    // cout << a << " " << b << endl;

    // int a = 23;
    // int b = 10;
    // int aux = 0;

    // cout << a << " " << b << endl;

    // aux = a;
    // a = b;
    // b = aux;

    // cout << a << " " << b << endl;

    // cout << "Vec1: " << endl;
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;
    // vector<int> vec2;
    // vec2.push_back(5);
    // vec2.push_back(52);
    // vec2.push_back(58);
    // cout << "Vec2: " << endl;
    // for (int i = 0; i < vec2.size(); i++)
    // {
    //     cout << vec2[i] << " ";
    // }
    // cout << endl;

    // vec.swap(vec2);

    // cout << "Vec1: " << endl;
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;

    // cout << "Vec2: " << endl;
    // for (int i = 0; i < vec2.size(); i++)
    // {
    //     cout << vec2[i] << " ";
    // }
    // cout << endl;

    // Eliminar una posicion del vector
    // .erase(posicion) || posicion es un iterador ( begin, end )
    // vec.erase(vec.begin() + 2);
    // vec.erase(vec.end() - 2);

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;

    return 0;
}