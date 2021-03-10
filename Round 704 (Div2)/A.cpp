#include <bits/stdc++.h>
using namespace std;
typedef long double ll;
typedef long long LL;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        cout<<LL(min({a*ceil(p/a),b*ceil(p/b),c*ceil(p/c)})-p)<<endl;
    }
    return 0;
}