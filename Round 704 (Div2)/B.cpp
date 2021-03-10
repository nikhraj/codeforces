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
        set <pair<int,int>,greater<pair<int,int>>> s;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            nums.push_back(num);
            s.insert({nums[i],i});
        }
        int index=s.begin()->second;
        s.erase(s.begin());
        for(int i=index;i<n;i++)
        {
            cout<<nums[i]<<" ";
        }
        int prev=index;
        while(index!=0)
        {
            index=s.begin()->second;
            s.erase(s.begin());
            if(index<prev)
            {
                
                for(int i=index;i<prev;i++)
                {
                    cout<<nums[i]<<" "; 
                }
                prev=index;
            }
        }
       /* int index;
        vector <int> indexes(nums.size(),-1);
        indexes[0]=max_element(nums.begin(),nums.end())-nums.begin();
        index=indexes[0];
        for(int j=index;j<nums.size();j++)
            cout<<nums[j]<<" ";
        int i=1;
        while(index!=0)
        {
            index=max_element(nums.begin(),nums.begin()+indexes[i-1])-nums.begin();
            //cout<<index<<" ";
            for(int j=index;j<indexes[i-1];j++)
                cout<<nums[j]<<" ";
            indexes[i]=index;
            i++;
        }*/
        cout<<endl;
    }
    return 0;
}