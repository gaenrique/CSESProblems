#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    vector<int> customers;
    for (int i = 0; i < n; i++)
    {
        int ticket;
        cin >> ticket;
        tickets.insert(ticket);
    }
    for (int i = 0; i < m; i++)
    {
        int customer;
        cin >> customer;
        auto boughtTicket = tickets.upper_bound(customer);
        if (boughtTicket == tickets.begin())
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << *(--boughtTicket) << endl;
            tickets.erase(boughtTicket);
        }
    }
    return 0;
}
