#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    cin >> n;
    unordered_map<int, int> numbers;
    for (int i = 0; i < n; i++)
    {
        numbers.insert({ i + 1, i });
    }
    string s;
    // Without this ignore call, getline reads the new line
    // character from the previous cin and therefore the
    // next line is not read
    cin.ignore();
    getline(cin, s);
    stringstream ss(s);
    int num;
    while (ss >> num)
    {
        numbers.erase(num);
    }
    for (pair<int, int> p : numbers)
    {
        cout << p.first << endl;
    }
    return 0;
}
