#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>A;
	A.push_back(1);
	A.push_back(2);
	A.push_back(3);
	A.push_back(4);
	A.erase(A.begin());
	for(int i=0;i<A.size();i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}