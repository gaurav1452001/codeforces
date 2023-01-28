#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ll long long int
#define v1 vector<int>
#define mod 1000000007

int solve()
{
    int w,d,h,i,a,b,f,g,ans,minlen;
    cin>>w>>d>>h;
    cin>>a>>b>>f>>g;
    ans=h;
    minlen=min(min(b+g+abs(a-f),2*d-g-b+abs(a-f)),min(a+f+abs(b-g),2*w-f-a+abs(b-g)));
    ans+=minlen;
    cout<<ans<<endl;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        //cerr<<"Executed in: "<<((float)clock()/CLOCKS_PER_SEC)*1000<<"ms"<<"\n";
    }
    return 0;
} 