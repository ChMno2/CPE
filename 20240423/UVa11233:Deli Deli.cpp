#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	map<string ,string> c;
	while(a--)
	{
		string e,d;
		cin>>e>>d;
		c[e]=d;
	}
	while(b--)
	{
		string w;
		cin>>w;
		if(c.count(w))
		{
			cout<<c[w]<<endl;
		}
		else
		{
			int ct=w.size()-1;
			if(w[ct]=='y'&&(w[ct-1]!='a'&&w[ct-1]!='e'))
			{
				w.erase(ct,1);
				w+="ies";
			}
			else if(w[ct]=='o'||w[ct]=='s'||(w[ct-1]=='c'&&w[ct]=='h')||(w[ct-1]=='s'&&w[ct]=='h')||(w[ct]=='x'))
			{
				w+="es";
			}
			else
			{
				w+="s";
			}
			cout<<w<<endl;	
		}
	
	}

}
