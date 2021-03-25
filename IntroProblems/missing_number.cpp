#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    cin >> n;
    long total = (n * (n + 1)) / 2;
    long num;
    for (long i = 0; i < n - 1; i++)
    {
        cin >> num;
        total -= num;
    }
    cout << total << endl;
    return 0;
}
