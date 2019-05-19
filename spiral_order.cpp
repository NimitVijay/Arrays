#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m=3,n=4;
	int t=0,b=m-1,l=0,r=n-1,d=0;
    vector<int>ans;
    while(t<=b && l<=r)
    {
        if(d==0)
        {
            for(int i=l;i<=r;i++)
            {
                ans.push_back(A[t][i]);
                d=1;
                
            }
            t++;
        }
        else if(d==1)
        {
            for(int i=t;i<=b;i++)
            {
                ans.push_back(A[i][r]);
                d=2;
                
            }
            r--;
        }
        else if (d==2)
        {
            for(int i=r;i>=l;i--)
            {
                ans.push_back(A[b][i]);
                d=3;
                
            }
            b--;
        }
        else if(d==3)
        {
            for(int i=b;i>=t;i--)
            {
                ans.push_back(A[i][l]);
                d=0;
            }
            l++;
        }
    }
    for(int i=0;i<ans.size();i++)
    {
    	cout << ans[i] << " ";
    }
    return 0;
}