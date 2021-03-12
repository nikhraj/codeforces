#include <bits/stdc++.h>
using namespace std;
typedef long double ll;
typedef long long LL;
void solve()
{
    ll a,b;
    cin>>a>>b;
    cout<<LL(ceil(abs(b-a)/10))<<endl;
}
int main()
{
    int t=1;  cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}