#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char> pila;
    string cadena;
    int error = 1;
    cin >> cadena;

    for (int i = 0; i < cadena.size(); i++)
    {
        if (cadena[i] == '(' || cadena[i] == '{' || cadena[i] == '[')
            pila.push(cadena[i]);
        else
        {
            if (cadena[i] == ')' || cadena[i] == '}' || cadena[i] == ']')
            {
                if (pila.empty())
                {
                    error = 0;
                    break;
                }

                char top = pila.top();

                pila.pop();

                if ((cadena[i] == ')' && top != '(') || (cadena[i] == '}' && top != '{') || (cadena[i] == ']' && top != '['))
                {
                    error = 0;
                    break;
                }
            }
        }
    }

    if (!pila.empty())
        error = 0;

    if (error)
        cout << "SI" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
