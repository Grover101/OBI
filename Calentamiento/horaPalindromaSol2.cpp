#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, m;
    while (true)
    {
        string ho, hoRe;
        cin >> h >> m;
        if (h == 0 && m == 0)
            break;
        ho = to_string(h) + to_string(m);
        hoRe = ho;
        reverse(hoRe.begin(), hoRe.end());
        if (hoRe == ho)
            cout << "SI" << endl;
        else
            cout << "NO" << endl;
    };

    return 0;
}
