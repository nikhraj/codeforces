#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> v;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        vector <int> ans;
        int mid=(v.size()-1)/2;
        ans.push_back(v[mid]);
        for(int i=1;i<=mid;i++)
        {
            ans.push_back(v[mid+i]);
            ans.push_back(v[mid-i]);
        }
        if(!(v.size()&1))
            ans.push_back(v[v.size()-1]);
        for(int i:ans)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}