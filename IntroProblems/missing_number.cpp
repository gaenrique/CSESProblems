#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    cin >> n;
    long total = (n * (n + 1)) / 2;
    cin.ignore();
    string s;
    getline(cin, s);
    stringstream ss(s);
    int num;
    while (ss >> num)
    {
        total -= num;
    }
    cout << total << endl;
    return 0;
}
