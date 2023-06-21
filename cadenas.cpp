#include <bits/stdc++.h>

using namespace std;

int main()
{
    // array de char, las cadenas simpre van en comillas dobles
    // los char van con comillas simples
    // declaracion
    string cadena = "hola", reemplazar;

    // cadana vacia
    // usando size o length cuando es 0 es vacia

    // true o 1 si esta vacia
    // cout << cadena.empty() << endl;

    // cin >> cadena;
    // obtiene cadenas con espacios
    getline(cin, cadena);
    // getline(cin, reemplazar);

    // ver un posicion
    // cout << cadena[5] << endl;

    // tipo de dato de una posicion
    // cout << typeid(cadena[5]).name() << endl;

    // tipo de dato de la cadena
    // cout << typeid(cadena).name() << endl;

    // longitud de una cadena
    // cout << cadena.size() << " " << cadena.length() << endl;

    // forma usando sus metodos propios de string
    // cout << cadena.append(" probando...") << endl;

    // concatenacion, 2da forma
    // cadena = cadena + " probando concatenacion...";
    // cadena += " algo";
    // cout << cadena << endl;

    // concatencion con char
    // char letra = '4';
    // cadena = letra + cadena + letra;
    // cout << cadena << endl;
    // cadena.front para agregar al inicio de una cadena
    // cadena.back para agregar al final de una cadena

    // esto concatena simpre al final
    // cadena.push_back('3');
    // cout << cadena << endl;

    // cadena[index]
    // cadena[0] = '3';
    // cadena.at(0) = '4';
    // cout << cadena << endl;

    // permite invertir una cadena, este metodo no devuelve nada es de tipo void
    // reverse(cadena.begin(), cadena.end());
    // cout << cadena << endl;

    //  hola mundo   => buscar 'u'
    // buscar un caracte en una cadena
    // bool a = true;
    // for (int i = 0; i < cadena.length(); i++)
    // {
    //     if (cadena[i] == 'u')
    //     {
    //         cout << "existe\n";
    //         a = false;
    //     }
    // }
    // if (a)
    //     cout << "No existe\n";

    // busqueda con metodo de cadana, devuelve -1 si no la encuentra
    //  y si encuentra devuelve la posicion
    // int pos = cadena.find("hola");
    // cout << pos << endl;

    // "hola mundo, como estas" => "hola mundo"
    // string aux = cadena.substr(0, 6);
    // cout << aux << endl;

    // "hola mundo, como estas" => "mundo" => "Jose" => "hola Jose, como estas"
    // el if recibe true o false | -1, 5 | 0 2, 4, => 0 == false, 1(cualquier numero diferente de 0) == true
    // if (cadena.find(reemplazar) != -1)
    // {
    //     int pos = cadena.find(reemplazar);
    //     for (int i = pos; i < reemplazar.length(); i++)
    //     {
    //     }

    //     cout << cadena << endl;
    // }
    // else
    //     cout << "la palabra no existe en la oracion\n";

    /**
     * @brief Replace
     *
     * cadena.replace(pos_init, nro_posiciones, cadReemplzo)
     *
     */

    // string newCadena = cadena.replace(0, 5, "abc");
    // cout << newCadena << endl;

    /**
     * @brief Invertir de una posicion a otra
     *
     * reverse(inicio + rango_A, fin + rango_B)
     *
     */
    // int a, b;
    // cin >> a >> b;
    // reverse(cadena.begin() + a, cadena.begin() + b);
    // cout << cadena << endl;

    /**
     * @brief Conversion de cadenas a int, float, doble
     *
     *  stoi(cadena) => para enteros (int)
     *  stof(cadena) => para flotantes (float)
     *  stod(cadena) => para flotantes grandes (doble)
     *
     */

    cout << typeid(cadena).name() << endl;
    // enteros
    int numero = stoi(cadena);
    cout << numero + 10 << endl;

    // float
    float numeroFloat = stof(cadena);
    cout << numeroFloat + 1.5 << endl;

    // double
    double numeroDouble = stod(cadena);
    cout << numeroDouble + 1.999999 << endl;

    return 0;
}
