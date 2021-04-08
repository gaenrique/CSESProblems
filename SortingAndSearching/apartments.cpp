#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> desiredSizes;
    vector<int> sizes;
    for (int i = 0; i < n; i++)
    {
        int desired;
        cin >> desired;
        desiredSizes.push_back(desired);
    }
    for (int i = 0; i < m; i++)
    {
        int size;
        cin >> size;
        sizes.push_back(size);
    }
    // Sorting allows for a more efficient algorithm
    sort(desiredSizes.begin(), desiredSizes.end());
    sort(sizes.begin(), sizes.end());
    int re = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        // Checking is apartment size fits the applicant's
        // desired size (Between desiredSize - k and desiredSize + k)
        if (abs(desiredSizes[i] - sizes[j]) <= k)
        {
            re++;
            i++;
            j++;
        }
        // If the applicant's desired size is less than the size, then
        // increment the applicant pointer
        else if (desiredSizes[i] < sizes[j])
        {
            i++;
        }
        // If the applicant's desired size is greater than the size,
        // then increment the apartment pointer
        else
        {
            j++;
        }
    }
    cout << re << endl;
    return 0;
}
