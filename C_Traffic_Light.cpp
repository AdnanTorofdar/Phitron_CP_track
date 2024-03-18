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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        int max_time = -1;
        s += s;
        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i] == c)
            {
                int cnt = 0;
                while (s[i] != 'g' and i < 2 * n)
                {
                    cnt++;
                    i++;
                }
                max_time = max(max_time, cnt);
            }
        }
        cout << max_time << '\n';
    }
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