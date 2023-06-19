#include <bits/stdc++.h>
using namespace std;

// solucion sumando y restando,?
// int main()
// {
//     long long n, aux;
//     cin >> n; scanrf()
//     aux = n;
//     for (long long i = 1; i < n; i++)
//     {
//         long long x;
//         cin >> x;
//         aux += i - x;
//     }
//     cout << aux << endl; printf()
// }

/**
 * solucion con formula, sigue dando limite de tiempo excedido
 *
 */
// int main()
// {
//     long long n, sum = 0;
//     cin >> n;
//     for (long long i = 1; i < n; i++)
//     {
//         long long x;
//         cin >> x;
//         sum += x;
//     }
//     cout << (n * (n + 1) / 2) - sum << endl;
// }

/**
 * Usando scanf y printf
 *
 * con para los datos de entras y salida sean rapidos
 */

// int main()
// {
//     long long n, sum = 0;
//     // cin >> n;
//     scanf("%llu", &n); // esto es mas rapido que el cin
//     for (long long i = 1; i < n; i++)
//     {
//         long long x;
//         // cin >> x;
//         scanf("%llu", &x);
//         sum += x;
//     }
//     // cout << (n * (n + 1) / 2) - sum << endl;
//     printf("%llu\n", (n * (n + 1) / 2) - sum); // es mas rapido que cout
// }

/**
 *
 * config cin para c ++  para que los datos de entras y salida sean rapidos
 *
 */

#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
#define ll long long

int main()
{
    fast_io;
    ll n, x;
    cin >> n;
    ll ans = n;
    for (ll i = 1; i < n; i++)
    {
        cin >> x;
        ans += i - x;
    }
    cout << ans << endl;
}