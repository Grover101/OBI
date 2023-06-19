#include <bits/stdc++.h>

using namespace std;

int n = 10000000;
int primos[10000000];
// 1. llenar el arreglo, en este caso esta lleno de 0s.

int invertir(int n)
{
    int aux = 0;
    while (n > 0)
    {
        aux = aux * 10 + (n % 10);
        n /= 10;
    }
    return aux;
}

int main()
{

    // CRIBA DE ERATOSTENES
    // 2. recorrer desde la posicion 2 hasta `n`
    for (int i = 2; i * i < n; i++)
    {
        // 3. se empiza a tachar los multiplos, solo cuando no esten tachados, el tachado es con 1
        if (primos[i] == 0)
        {
            // 4. tacha los multiplos de `i`.
            // i * i esto reduce el numero de recorridos y no tomas encuenta algunos multiplos que
            // ya fueron tachados
            for (int j = i * i; j < n; j += i)
            {
                // 5. tachar la posicion, tachado con `1`
                primos[j] = 1;
            }
        }
    }

    // int x;
    // cin >> x;
    // ! es para negar. Ejemplo
    /*
     * x = true
     * !x => false
     *
     * n = false
     * !n => true
     *
     *
     * true == 1
     * false == 0
     *
     * x = 8
     * primos[x]  =>  1
     * !primos[x]   => 0
     *
     *
     * x = 11
     * primos[x]  => 0
     * !primos[x]   => 1
     *
     *
     */

    // if (!primos[x]) // !primos[x] // !=
    //     cout << "Primo" << endl;
    // else
    //     cout << "No Primo" << endl;

    int a, b, sum = 0, nprimo = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (!primos[i] && !primos[invertir(i)]) // o if(primos[i] == 0 && primos[invertir(i) == 0])
        {
            nprimo++;
            sum += i;
        }
    }

    cout << "= " << fixed << setprecision(3) << float(sum) / float(nprimo) << endl;

    return 0;
}