#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    ll y, x;
    for (ll i = 0; i < t; i++)
    {
        cin >> y >> x;
        ll square = max(y, x) * max(y, x);
        if (y == x)
        {
            cout << square - (y - 1) << endl;
            continue;
        }
        if (y > x)
        {
            if (y % 2 == 0)
            {
                cout << square - (x - 1) << endl;
            }
            else
            {
                cout << square - ((y - 1) + (y - x)) << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                cout << square - ((x - 1) + (x - y)) << endl;
            }
            else
            {
                cout << square - (y - 1) << endl;
            }
        }
    }
    return 0;
}
