#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n, i;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) // input
    {
        cin >> a[i];
    }
    // checking if all the elements are equal or not
        if (a[0] == a[n-1])
        {
            cout<<"NO"<<endl;
            return 0;
        }
         
        cout << "YES" << endl;
        cout<<a[n-1]<<" ";
        for (i = 0; i < n-1; ++i) // output the array
        {
            cout << a[i] << " ";
        }
        cout << endl;
 
    return 0;
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