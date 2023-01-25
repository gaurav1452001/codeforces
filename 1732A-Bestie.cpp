#include <bits/stdc++.h>
using namespace std;

int solve()
{
 long long ans,n,i,a;
 cin>>n;
 cin>>a;
 ans=a;
  for(i=2;i<n+1;i++)
    {
        cin>>a;
        ans=__gcd(ans,a);
    }
    if(ans==1)
    {
        cout<<"0"<<endl;
    }
    else if(__gcd(ans,n)==1)
    {
        cout<<"1"<<endl;
    }
    else if(__gcd(ans,n-1)==1)
    {
        cout<<"2"<<endl;
    }
    else
    {
        cout<<"3"<<endl;
    }
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