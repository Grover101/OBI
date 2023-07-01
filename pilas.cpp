#include <bits/stdc++.h>

using namespace std;

int main()
{
    /**
     * @brief Pilas || stack
     * #include <stack>
     */

    // declarar
    stack<int> pila;

    // push -> para introducir a la pila
    pila.push(4);
    pila.push(41);
    pila.push(20);
    pila.push(15);

    // top -> es para ver el ultimo elemento de la pila
    // pop -> elimina el ultimo elemento en la pila
    int ul = pila.top();
    pila.pop();
    cout << ul << endl;
    ul = pila.top();
    pila.pop();
    cout << ul << endl;
    ul = pila.top();
    pila.pop();
    cout << ul << endl;
}