#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,cs=1;
	while(cin>>h&&h)
	{
		cout<<"Game "<<cs<<":"<<endl;
		cs++;
		int a[1000]={0};
		int q[100]={0};
		int e[1000]={0};
		int t[100]={0};
		for(int i=0;i<h;i++)
		{
			cin>>a[i];
			q[a[i]]++;
		}
		while(cin>>e[0])
		{
			int cc=0,ct=0;
			for(int i=0;i<100;i++)
			{
				t[i]=q[i];
			}
			int w[100]={0};
			
			for(int i=1;i<h;i++)
			{
				cin>>e[i];
				w[e[i]]++;
			}
			if(e[0]==0)
				break;
			else
			{
				w[e[0]]++;
			}
			for(int i=0;i<h;i++)
			{
				if(a[i]==e[i])
				{
					cc++;
					t[a[i]]--;					
					w[e[i]]--;
				}							
			}
			for(int i=0;i<100;i++)
			{
				if(t[i]&&w[i])
					ct+=min(t[i],w[i]); 
			}
			
			
			cout<<"    ("<<cc<<","<<ct<<")"<<endl;
	
				
		}
		
	}
	

}
