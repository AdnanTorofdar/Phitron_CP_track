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
    ll s, t;
    cin >> s >> t;
    ll cnt = 0;
    for (ll i = 0; i <= s; i++)
    {
        for (ll j = 0; j <= s; j++)
        {
            for (ll k = 0; k <= s; k++)
            {
                if (i + j + k <= s && i * j * k <= t)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
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