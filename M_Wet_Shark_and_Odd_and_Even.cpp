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
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll x = 0;
    sort(a,a+n);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            x = a[i];
            break;
        }
        else
        {
            continue;
        }
    }
    if (sum % 2 == 0)
        cout << sum << endl;
    else
        cout << sum - x << endl;
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