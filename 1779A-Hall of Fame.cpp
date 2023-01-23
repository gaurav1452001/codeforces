#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
       if(s.find('R') == string::npos||s.find('L') == string::npos)
       {
        cout<<"-1"<<endl;
       }
       else if(s.find_first_of("R")<s.find_last_of("L"))
       {
        cout<<"0"<<endl;
       } 
       else
       {
        cout<<s.find_last_of("L")+1<<endl;
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