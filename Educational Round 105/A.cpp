#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector <int> m(3,0);
        for(char c:s)
        {
            m[c-'A']++;
        }
       /* if(m[0]!=m[1]+m[2]||m[1]!=m[0]+m[2]||m[2]!=m[0]+m[1])
        {
            cout<<"NO"<<endl;
        
        }*/
        int n=s.size();
        if(s[0]==s[n-1])
            cout<<"NO"<<endl;
        else
        {
        bool flag=false;
        for(int i=0;i<3;i++)
        {
            if(m[i]==(n>>1))
            {
                flag=true;
                int counta=0,countb=0;
                if(s[0]==i+'A')
                {
                    for(char c:s)
                    {
                        if(c==i+'A')
                            counta++;
                        else
                            countb++;
                        if(countb>counta)
                        {
                            flag=false;
                            //cout<<"NO"<<endl;
                            break;
                        }
                    }
                }
                else
                {
                    for(char c:s)
                    {
                        if(c==i+'A')
                            countb++;
                        else
                            counta++;
                        if(countb>counta)
                        {
                            flag=false;
                            //cout<<"NO"<<endl;
                            break;
                        }
                    }
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}