#include <bits/stdc++.h>
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define pll pair<long long int, long long int>
#define nl '\n'
using namespace std;

int main()
{
    slow;

    ll a,b,c; cin>>a>>b>>c;

    ll ans=-1;

    if(b>=c)
    {
        if(a>c) c=c*((a/c)+1);

        if(c>=a && c<=b) ans=c;
    }

    cout<<ans;


    return 0;
}