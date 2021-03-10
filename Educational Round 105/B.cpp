#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector <int> nums(4);
        cin>>n>>nums[0]>>nums[1]>>nums[2]>>nums[3];
        bool ans=false;
        
        for(int i=0;i<16;i++)
        {
            bitset<4> b(i);
            //cout<<b<<endl;
            vector <int> temp=nums;
            for(int j=0;j<4;j++)
            {
                if(b[j]==1)
                {
                    temp[j]--;
                    temp[(j-1)==-1?3:j-1]--;
                }
            }
            int c=0;
            for(int j=0;j<4;j++)
            {
                if(temp[j]>=0&&temp[j]<=n-2)
                {
                    c++;    
                }
            }
            if(c==4)
            {
                ans=true;
                break;
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}