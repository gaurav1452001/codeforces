#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define ll long long int
#define v1 vector<int>
#define mod 1000000007
int main()
{
    int n, j=1, k = 2, i = 1;
    cin >> n;
    int temp = n;
    v1 v(n);
    n--;
    iota(v.begin(), v.end(), 1);
    while (n--)
    {
        cout << v[i] << " ";
        j+=k;
        if (j > (temp - 1))
            {i = k - temp + i;j=i;}
        else
            {i += k;j=i;}
        k++;
    }
    return 0;
}
