#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll moves = 0;
    ll curr;
    ll previous = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> curr;
        if (previous == INT_MIN)
        {
            previous = curr;
            continue;
        }
        if (curr < previous)
        {
            moves += (previous - curr);
            continue;
        }
        previous = curr;
    }
    cout << moves << endl;
}
