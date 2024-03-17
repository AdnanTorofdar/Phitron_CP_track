#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb .push_back
#define po .pop_back()
#define ff first
#define ss second
#define mod 1000000007
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void me()
{
    int a, b, c;
    cin >> a >> b >> c;
    int n = ceil((float)c / a);
    int m = ceil((float)c / b);
    int f = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (a * i + b * j == c)
            {
                f++;
                break;
            }
        }
    }
    if(f==0) cout<<"No";
    else cout<<"Yes";
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