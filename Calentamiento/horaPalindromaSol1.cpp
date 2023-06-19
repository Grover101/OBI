#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int A, B, C;
        cin >> A >> B;
        if (A == 0 && B == 0)
        {
            break;
        }
        if (B >= 10)
        {
            C = A * 100 + B;
        }
        else
        {
            C = A * 10 + B;
        }
        int result = 0;
        int xd = C;
        while (xd > 0)
        {
            result = result * 10 + (xd % 10);
            xd /= 10;
        }
        if (A == 0)
        {
            result *= 10;
        }
        cout << C << " " << result << endl;
        if (C == result)
        {
            cout << "SI" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}