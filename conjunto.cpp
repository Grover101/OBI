#include <bits/stdc++.h>

using namespace std;

int main()
{
    /**
     * @brief Conjutos || set
     *
     * set<tipo de dato> nombre;
     *
     */

    set<int> conjunto;

    // insert para insertar en el conjunto
    conjunto.insert(52);
    conjunto.insert(10);
    conjunto.insert(20);
    conjunto.insert(1);
    conjunto.insert(-5);
    conjunto.insert(30);
    conjunto.insert(1);

    // empty
    // size

    for (auto it = conjunto.begin(); it != conjunto.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // eliminar un valor o un rango de valores
    // .erase(inicial, final) || .erase(valor)

    // solo un valor
    // conjunto.erase(20);

    // .find(valor) => retorna es un iterador
    // auto inicio = conjunto.find(1);
    // auto end = conjunto.find(30);

    // .lower_bound(valor) => retorna es un iterador
    // el primer elemento no menor al valor buscado
    auto inicio = conjunto.lower_bound(1);
    cout << *inicio << endl;

    // .upper_bound(valor) => retorna es un iterador
    // el primer elemento mas grande que el valor buscado
    auto end = conjunto.upper_bound(30);
    cout << *end << endl;

    // eliminar de un valor a otro
    conjunto.erase(inicio, end);

    for (auto it = conjunto.begin(); it != conjunto.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // borrar todo
    // .clear()

    // conjunto.clear();

    // if (conjunto.empty())
    //     cout << "esta vacia" << endl;
    // else
    //     cout << "hay elementos\n";

    // conjunto.insert(5);
    // if (conjunto.empty())
    //     cout << "esta vacia" << endl;
    // else
    //     cout << "hay elementos\n";

    return 0;
}