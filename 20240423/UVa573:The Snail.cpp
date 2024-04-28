#include<bits/stdc++.h>
using namespace std;
int main()
{
	double h,u,d,f; //深度 白天爬 晚上滑 疲勞
	while(cin>>h>>u>>d>>f&&h!=0)
	{
		int day=0;
		double distance=0;
		double speed=u; //爬的速度(距離) 第一天為u 
		while(true)
		{
			if(speed>0){
				distance+=speed;
			}
			day++;
			
			if(distance>h)
			{
				cout<<"success on day "<<day<<endl;
				break;
			}
			speed-=(u*f/100); //第二天開始會疲勞
			distance-=d;
			
			if(distance<0)
			{
				cout<<"failure on day "<<day<<endl;
				break;
			}
			/*cout<<day<<" ";
			cout<<speed<<" ";
			cout<<distance<<endl;*/
		}
	}
}
