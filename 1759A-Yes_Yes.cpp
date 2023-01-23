//first code- iterating over all the characters
#include <bits/stdc++.h>
using namespace std;
int solve1()
{
    int pos=0,i;
    string s;
    string syes="Yes";
    cin>>s;
    if(s[0]=='Y')
        {
            i=0;
        }
    else if(s[0]=='e')
        {
            i=1;
        }
    else if(s[0]=='s')
        {
            i=2;
        }
    else
        {
            cout<<"NO"<<endl;
            return 0;
        }
        
        while(pos<s.length())    
        {
        if(s[pos]!=syes[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        pos++;
        if(i==2)
            {
                i=0;
                continue;
            }
        i++;
        }
    cout<<"YES"<<endl;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve1();
    }
    return 0;
} 

//second code logic using substring

int solve2()
{
 string s;
 
    cin >> s;
 
    string check = "";
 
    for(int i = 0; i < 20; i++) check += "Yes";
 
    int n = (int)s.size();
 
    for(int i = 0; i < 3; i++){
        string tmp = check.substr(i, n);
 
        if(tmp == s){
            cout << "YES" << endl;
 
            return 0;
        }
    }
 
    cout << "NO" << endl;
}
