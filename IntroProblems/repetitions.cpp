#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int r = 0;
    int currentR = 1;
    char currentC = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        char c = s[i];
        if (c == currentC)
        {
            currentR++;
            continue;
        }
        r = (currentR > r) ? currentR : r;
        currentR = 1;
        currentC = c;
    }
    r = (currentR > r) ? currentR : r;
    cout << r << endl;
    return 0;
}
