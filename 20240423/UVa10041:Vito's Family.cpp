#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int d;
		cin>>d;
		vector<int> s(d);
		for(int j=0;j<d;j++)
		{
			cin>>s[j];
		}
		sort(s.begin(),s.end());
		int sum=0;
		for(auto&r:s)
		{
			sum+=abs(r-s[d/2]);
		}
		cout<<sum<<endl;
		
		
	}
}




