//here we have to see that binary form of k 
//where there is 1 in binary form of k we have to take power of n and that place
//n=3,k=4(0100)
//at i=2 it is 1 so power of 3,2=9
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll M=1000000007;
ll pow(ll a,ll b)
{
	ll tot=1;
	for(ll i=1;i<=b;i++)
	tot=((tot%M)*a)%M;
	return tot;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll sum=0;
		for(ll i=0;i<=32;i++)
		{
			if((1<<i)&k)
			sum=(sum+pow(n,i))%M;
		}
		cout<<sum<<"\n";
	}
}
