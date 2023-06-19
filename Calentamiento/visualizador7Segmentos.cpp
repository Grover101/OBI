#include <bits/stdc++.h>

using namespace std;

int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int h, m, nled = 0;
        scanf("%d %d", &h, &m);
        string minute = m <= 9 ? "0" + to_string(m) : to_string(m);
        string hora = to_string(h) + minute, result;
        for (size_t i = 0; i < hora.length(); i++)
            nled += leds[int(hora[i]) - 48];

        if (nled % 2 == 0)
            for (int i = 0; i < nled / 2; i++)
                result += "1";
        else
        {
            result = "7";
            for (int i = 0; i < (nled - 3) / 2; i++)
                result += "1";
        }

        printf("%d\n%s\n%s\n", nled, hora.c_str(), result.c_str());
    }

    return 0;
}