#include <bits/stdc++.h>
using namespace std;
typedef long double ll;
typedef long long LL;
int main()
{
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    vector <pair<int,int>> ma(m);
    int j=0;
   // char prev = b[j];
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[j])
        {
            ma[j].first=i;
            j++;
        }
        if(j==m)
            break;
    }
    j=m-1;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==b[j])
        {
            ma[j].second=i;
            j--;
        }
        if(j==-1)
            break;
    }

    int ans=INT_MIN;
    //for(int i=0;i<m;i++)
       // cout<<left[i]<<" "<<right[i]<<endl;
    for(int i=1;i<m;i++)
    {
        ans=max(ans,ma[i].second-ma[i-1].first);
    }
    cout<<ans<<endl;
    return 0;
}