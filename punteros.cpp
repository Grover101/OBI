#include <bits/stdc++.h>

using namespace std;

// funciones
void intercambio(int *a, int *b)
{
    int temporal = *a;
    *a = *b;
    *b = temporal;
}

int main()
{
    /**
     * @brief Punteros
     *
     */

    // Declara un puntero:
    // int *puntero;

    // iniciar un puntero
    int a = 10;
    int *puntero = &a;

    // uso para funciones
    int x = 12, y = 34;
    cout << x << " " << y << endl;
    intercambio(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}