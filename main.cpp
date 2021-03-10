#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int c1=0;
    //int c2=0;
    vector <int> nums;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if(num==1)
            c1++;
        nums.push_back(num);
    }
    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==1)
        {
            b--;
            nums[b]^=1;
            if(nums[b])
                c1++;
            else
                c1--;
        }
        else{
            if(c1>=b)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
    }
    return 0;
}