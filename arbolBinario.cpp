#include <bits/stdc++.h>

using namespace std;
struct Nodo
{
    int valor;
    Nodo *izquierda;
    Nodo *derecha;

    Nodo(int value) : valor(value), izquierda(nullptr), derecha(nullptr) {}
};

void insertar(Nodo *&raiz, int valor)
{
    // caso base de recursividad
    if (raiz == nullptr)
    {
        raiz = new Nodo(valor);
        return;
    }

    // menores se pasen al lado izquierdo
    if (valor < raiz->valor)
    {
        // por el izquiedo
        insertar(raiz->izquierda, valor);
    }
    else
    {
        // por el derecho
        insertar(raiz->derecha, valor);
    }
}

void recorridoPreOrderRecursivo(Nodo *nodo)
{
    if (nodo != nullptr)
    {
        cout << nodo->valor << " ";
        recorridoPreOrderRecursivo(nodo->izquierda);
        recorridoPreOrderRecursivo(nodo->derecha);
    }
    return;
}

void recorridoInOrderRecursivo(Nodo *nodo)
{
    if (nodo != nullptr)
    {
        recorridoInOrderRecursivo(nodo->izquierda);
        cout << nodo->valor << " ";
        recorridoInOrderRecursivo(nodo->derecha);
    }
    return;
}

void recorridoPostOrderRecursivo(Nodo *nodo)
{
    if (nodo != nullptr)
    {
        recorridoPostOrderRecursivo(nodo->izquierda);
        recorridoPostOrderRecursivo(nodo->derecha);
        cout << nodo->valor << " ";
    }
    return;
}

void recorridoPreOrder(Nodo *raiz)
{
    if (raiz != nullptr)
    {
        stack<Nodo *> pila;

        pila.push(raiz);

        while (!pila.empty())
        {
            Nodo *nodo = pila.top();

            pila.pop();

            cout << nodo->valor << " ";

            if (nodo->derecha != nullptr)
            {
                pila.push(nodo->derecha);
            }
            if (nodo->izquierda != nullptr)
            {
                pila.push(nodo->izquierda);
            }
        }
    }
}

void recorridoInOrder(Nodo *raiz)
{
    if (raiz != nullptr)
    {
        stack<Nodo *> pila;
        Nodo *actual = raiz;

        while (actual != nullptr || !pila.empty())
        {
            while (actual != nullptr)
            {
                pila.push(actual);
                actual = actual->izquierda;
            }

            actual = pila.top();
            pila.pop();

            cout << actual->valor << " ";
            actual = actual->derecha;
        }
    }
}

int main()
{

    Nodo *raiz = nullptr;
    insertar(raiz, 4);
    insertar(raiz, 2);
    insertar(raiz, 1);
    insertar(raiz, 0);
    insertar(raiz, 8);
    insertar(raiz, 6);

    // cout << raiz->valor << endl;
    // cout << raiz->derecha->valor << endl;

    // // 8
    // cout << raiz->derecha->derecha->izquierda->valor << endl;

    cout << "Recorrido en Pre Orden Recursivo:\n";
    recorridoPreOrderRecursivo(raiz);

    cout << "\nRecorrido en In Orden Recursivo:\n";
    recorridoInOrderRecursivo(raiz);

    cout << "\nRecorrido en Post Orden Recursivo:\n";
    recorridoPostOrderRecursivo(raiz);

    cout << "\nRecorrido en Pre Orden Pilas y While:\n";
    recorridoPreOrder(raiz);

    cout << "\nRecorrido en In Orden Pilas y While:\n";
    recorridoInOrder(raiz);
    cout << endl;

    return 0;
}