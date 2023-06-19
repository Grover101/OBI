#include <bits/stdc++.h>

using namespace std;

int main()
{
    float nl, t, ep;
    cin >> nl >> t >> ep;
    float entrada = nl * 0.25 + t * 0.1 + ep * 0.3;
    cout << "Entrada = " << fixed << setprecision(1) << entrada << endl;
    cout << "Minimo = " << fixed << setprecision(1) << 51 - entrada << endl;
    return 0;
}