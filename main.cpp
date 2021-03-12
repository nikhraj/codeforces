#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin>>n;
    map <int,int> m;
    map <int,int> m2;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        m[num]++;
    }
    for(auto i:m)
    {
        m2[i.second]++;
    }
    int ans=n;
    int left=0;
    int right=n;
    int rightcnt=m.size();
    for(auto [x,y]:m2)
    {
        ans=min(ans,left+right-x*rightcnt);
        left+=x*y;
        right-=x*y;
        rightcnt-=y;
    }
    cout<<ans<<endl;
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
//clang++-7 -pthread -std=c++17 -o main main.cpp