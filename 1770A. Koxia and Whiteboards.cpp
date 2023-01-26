#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve()
{
    int n, m, i;
    ll sum = 0;
    cin >> n >> m;
    std::vector<int> a(n);
    std::vector<int> b(m);
    std::vector<int>::iterator it;
    for (i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (i = 0; i < m; ++i)
    {
        cin >> b[i];
    }

    for (i = 0; i < m; ++i)
    {
        auto it = std::minmax_element(a.begin(), a.end());
        int min_idx = std::distance(a.begin(), it.first);
        a[min_idx] = b[i];
    }
    for (i = 0; i < n; ++i)
        sum += a[i];
    cout << sum << endl;
    cerr << "Executed in: " << ((float)clock() / CLOCKS_PER_SEC) * 1000 << "ms"
         << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}