#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> weights;
    for (int i = 0; i < n; i++)
    {
        int weight;
        cin >> weight;
        weights.push_back(weight);
    }
    // Sorting in descending order allows for more efficient
    // algorithm
    sort(weights.begin(), weights.end(), greater<int>());
    int re = 0;
    int i = 0;
    int j = weights.size() - 1;
    int childrenLeft = weights.size();
    // Compares current heaviest with current lightest
    while (i < j)
    {
        int combinedWeight = weights[i] + weights[j];
        // If current heaviest + current lightest fit in the
        // gondola, then the two pointers are moved
        if (combinedWeight <= x)
        {
            re++;
            i++;
            j--;
            childrenLeft -= 2;
        }
        else
        {
            re++;
            i++;
            childrenLeft--;
        }
    }
    // childrenLeft is used as there might be an extra child which
    // wasn't accounted for due to the nature of the two pointer
    // method
    re += childrenLeft;
    cout << re << endl;
    return 0;
}
