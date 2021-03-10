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
        vector <int> nums;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            nums.push_back(num);
        }
        int prev=nums[0];
        int maxi=INT_MIN;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>=prev)
            {
                prev=nums[i];
            }
            else
            {
                maxi=max(maxi,prev-nums[i]);
            }
        }
        int bits=0;
        if(maxi==INT_MIN)
            cout<<bits<<endl;
        else
        {
            while(maxi)
            {
                maxi>>=1;
                bits++;
            }
            cout<<bits<<endl;
        }
    }
    return 0;
}