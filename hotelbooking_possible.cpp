#include<bits/stdc++.h>
using namespace std;
int main()
{
	//function only
	int r=1;
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    if(arrive.size()<=K)
        r=1;
    else
    {
        for(int i=0;i<arrive.size()-K;i++)
        {
            if(arrive[i+K]-depart[i]<0)
            {
                r=0;
                break;
            }
        }
    }
        
    if(r==0)
        return false;
    return true;
	return 0;
}