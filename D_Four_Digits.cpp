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
    if (n == 0)
        cout << 0<<0<<0<<0;
    else if (n > 0 && n <=9)
        cout << 0 << 0 << 0 << n;
    else if (n >= 10 && n < 100)
        cout << 0 << 0 << n;
    else if (n >= 100 && n < 999)
        cout << 0 << n;
    else
        cout << n;
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