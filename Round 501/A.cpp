#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef long double ld;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector <vector <int>> ma(m,vector <int>(5));
    
    for(int i=0;i<n;i++)
    {   
        string s;
        cin>>s;
        int j=0;
        for(char c:s)
        {
            ma[j++][c-'A']++;
        }
    }
    vector <int> nums;
    for(int i=0;i<m;i++)
    {
        int num;
        cin>>num;
        nums.push_back(num);
    }
    int ans=0;
    int j=0;
    for(auto i:ma)
    {
        //for(auto nik:i)
        //cout<<nik<<" ";
        //cout<<endl;
        //cout<<nums[j]<<endl;
        ans+=*max_element(i.begin(),i.end())*nums[j++];
    }
    cout<<ans<<endl;
}
 
int main()
{
   // freopen("input.txt","r",stdin);
   int t=1;  //cin>>t;
   while (t--)
   {
      solve();
   }
   return 0;
}
//clang++-7 -pthread -std=c++17 -o main main.cpp