#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n,i,k;
    cin>>n;
    cout<<"2"<<endl;
    int a=n,b=n-1;
    for(int i=1;i<n;i++)
    {
        cout<<b<<" "<<a<<endl;
        a=(a+b+1)/2;
        b--;
    }
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