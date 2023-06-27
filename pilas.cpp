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

    pila.push(4);
    pila.push(41);
    pila.push(20);
    pila.push(15);

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