#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		ll dif=(y-x);
		if(dif>=0)
		{
		if(dif%2==0)
		cout<<dif/2;
		else
		{
			cout<<(dif/2)+2;
		}
	}
	else
	cout<<abs(dif);
		cout<<"\n";
	}
}
