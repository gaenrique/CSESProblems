#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll moves = 0;
    string line;
    cin.ignore();
    getline(cin, line);
    stringstream ss(line);
    ll curr;
    ll previous = INT_MIN;
    while (ss >> curr)
    {
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
