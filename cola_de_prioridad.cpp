#include <bits/stdc++.h>

using namespace std;

int main()
{
    /**
     * @brief Cola de prioridad || priority_queue
     * #include <queue>
     * Te ordena tu cola de mayor a menor
     */

    // declarar
    priority_queue<int> pq;

    // push -> para introducir a la cola de prioridad
    pq.push(4);
    pq.push(41);
    pq.push(20);
    pq.push(15);

    // top -> ultimo elemento de la cola de prioridad
    // pop -> elimina el primer elemento en la cola
    int top = pq.top();
    pq.pop();
    cout << top << endl;
    top = pq.top();
    pq.pop();
    cout << top << endl;
    top = pq.top();
    pq.pop();
    cout << top << endl;
    top = pq.top();
    pq.pop();
    cout << top << endl;
}
