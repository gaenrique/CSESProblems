#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> distinctNumbers;
    int curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        distinctNumbers.insert(curr);
    }
    cout << distinctNumbers.size() << endl;
    return 0;
}
