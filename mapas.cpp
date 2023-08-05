#include <bits/stdc++.h>

using namespace std;

int main()
{

    /**
     * @brief mapas || map
     *
     * pair || pares
     *
     * map<tipo de dato para la clave, tipo de dato para el valor> nombre;
     *
     */

    map<string, int> mapa;
    pair<string, int> pares;

    pares.first = "Jose";
    pares.second = 15;

    // 1er usando make_pair
    mapa.insert(make_pair("Manuel", 20));
    // 2da usando pair
    mapa.insert(pares);
    // 3er similar a los arreglos
    mapa["Alex"] = 18;

    // el simple hecho que este de esta forma ya se crear con
    // un valor 0 o deacuerdo del tipo de dato
    mapa["Marco"];

    // cout << mapa["Marco"] << endl;

    // empty
    // size

    // tiene los mismos datos del conjunto
    // pero no busca o eliminar por el valor
    // si no por la llave

    // .find(clave) => retorna es un iterador
    // auto it = mapa.find("Alex");
    // cout << it->first << " " << it->second << endl;

    auto it = mapa.find("Alex");
    if (it != mapa.end())
        cout << it->first << " " << it->second << endl;
    else
        cout << "no existe esta clave \n";

    for (auto it = mapa.begin(); it != mapa.end(); it++)
    {
        cout << it->first << " " << it->second << "\n";
    }

    // borrar todo
    // .clear()
    // mapa.clear();

    // if (mapa.empty())
    //     cout << "esta vacia" << endl;
    // else
    //     cout << "hay elementos\n";

    // mapa["Javier"];
    // if (mapa.empty())
    //     cout << "esta vacia" << endl;
    // else
    //     cout << "hay elementos\n";

    return 0;
}