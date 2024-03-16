#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void me()
{
    ll a[26] = {0};
    string s;
    cin >> s;
    char x='a';
    ll flag=0;
    for (ll i = 0; i < s.size(); i++)
    {
        a[s[i]-'a']++;
    }
    for(ll i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            flag=1;
            x = char('a' + i);
            break;
        }
    }
    if(flag==1) cout<<x;
    else cout<<"None";
}
int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
        me();
    return 0;
}