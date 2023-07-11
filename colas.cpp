#include <bits/stdc++.h>

using namespace std;

int main()
{
    /**
     * @brief Colas || queue
     * #include <queue>
     * FIFO
     * El primero en entrar es el primero en salir
     */

    // declarar
    queue<int> cola;

    // push -> para introducir a la pila
    cola.push(4);
    cola.push(41);
    cola.push(20);
    cola.push(15);

    // front -> es para ver el primer elemento de la cola
    // back -> es para ver el ultimo elemento de la cola
    // pop -> elimina el primer elemento en la cola
    int first = cola.front();
    cola.pop();
    cout << first << endl;
    first = cola.front();
    cola.pop();
    cout << first << endl;
    first = cola.front();
    cola.pop();
    cout << first << endl;
    first = cola.front();
    cola.pop();
    cout << first << endl;
}
