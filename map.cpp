#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, int> apl;
    apl.insert(make_pair('a', 13));
    apl.insert(make_pair('b', 98));
    cout << apl['a'] << "\n";
    cout << apl['b'] << "\n";
    // Notese que no existe apl['c] por lo que se creara y pondra como valor 0
    cout << apl['c'] << "\n";
    // Acceso a las llaves y valores mediante iteradores
    for (map<char, int>::iterator it = apl.begin(); it != apl.end(); it++)
    {

        cout << it->first << " " << it->second << "\n";
    }
    // Resultado: a 13 b 98 c 0
    if (apl.count('a') == 1)
        cout << "'a' esta en la aplicacion \n";
    else
        cout << "'a' no esta en la aplicacion \n";
    // Resultado: 'a' está en la aplicacion
    if (apl.find('d') != apl.end())
        cout << "'d' esta en la aplicacion \n";
    else
        cout << "'d' no esta en la aplicacion \n";
    // Resultado: 'd' no está en la aplicacion
    if (apl.lower_bound('c') != apl.upper_bound('c'))
        cout << "'c' esta en la aplicacion \n";
    else

        cout << "'c' no esta en la aplicacion \n";
    // Resultado: 'c' está en la aplicacion
    if (apl.lower_bound('Z') == apl.upper_bound('Z'))
        cout << "'Z' no esta en la aplicacion \n";
    else
        cout << "'Z' esta en la aplicacion \n";
    // Resultado: 70 no está en la aplicacion

    // count
    cout << apl.count('a') << endl;
    cout << apl.count('c') << endl;
    cout << apl.count('Z') << endl;
    // find
    cout << apl.find('a')->first << " " << apl.find('a')->second << endl;
    cout << apl.find('c')->first << " " << apl.find('c')->second << endl;
    cout << apl.find('Z')->first << " " << apl.find('Z')->second << endl;
    // find
    cout << apl.lower_bound('a')->first << " " << apl.lower_bound('a')->second << endl;
    cout << apl.lower_bound('b')->first << " " << apl.lower_bound('b')->second << endl;
    cout << apl.lower_bound('Z')->first << " " << apl.lower_bound('Z')->second << endl;
    return 0;
}