#include <bits/stdc++.h>

using namespace std;

int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int h, m;
        cin >> h >> m;
        // to_string(int)
        string hora = to_string(h);
        string minuto = m < 10 ? "0" + to_string(m) : to_string(m);

        string numero = hora + minuto;
        string numGrande = "";
        int sum = 0;

        for (int i = 0; i < numero.length(); i++)
        {
            // solo para numeros, convertir un char a int
            int a = int(numero[i]) - 48;
            sum += leds[a];
        }

        if (sum % 2 == 0)
        {
            // solo 1s
            for (int i = 0; i < sum / 2; i++)
            {
                numGrande += "1";
            }
        }
        else
        {
            // va tener un 7 seguiodo de 1s
            numGrande = "7";
            for (int i = 0; i < (sum - 3) / 2; i++)
            {
                numGrande += "1";
            }
        }

        cout << sum << endl
             << numero << endl
             << numGrande << endl;
    }
    return 0;
}