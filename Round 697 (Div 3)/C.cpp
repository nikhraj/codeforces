#include <bits/stdc++.h>
using namespace std;
typedef long double ll;
typedef long long LL;
void solve()
{
    int a,b,k;
    cin>>a>>b>>k;
    vector <pair<int,int>> v(k,{0,0});
    vector <int> degree_girls(b+1,0);
    vector <int> degree_boys(a+1,0);
    int num;
    for(int i=0;i<k;i++)
    {
        cin>>num;
        v[i].first=num;
        degree_boys[num]++;
    }
    for(int i=0;i<k;i++)
    {
        cin>>num;
        v[i].second=num;
        degree_girls[num]++;
    }
   
    LL ans=0;
    for(auto j:v)
        ans+=k-degree_boys[j.first]-degree_girls[j.second]+1;
    cout<<ans/2<<endl;
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