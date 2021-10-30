//here key is use to use lcm and precompute lcm from 2 to 100001
//lcm at i means lcm(2,3....,i) bcz at i=1 we have to take i+1 modulus
//lets take position i --if arr[i]%lcm[i]==0(then we cannot delete this number);
// so check at each element
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll lc[100002];
	lc[1]=2;
	for(ll i=2;i<100002;i++)
	{
		lc[i]=lcm(lc[i-1],i+1);
	}
	ll t;
	cin>>t;
	while(t--)
	{
	ll n;
	cin>>n;
	ll arr[n+1];
	for(ll i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	ll flag=1;
	for(ll i=1;i<=n;i++)
	{
		if((arr[i]%lc[i])==0)
		{
			flag=0;
			break;
		}
	}
	if(flag)
	cout<<"YES";
	else
	cout<<"NO";
	cout<<"\n";
}
}
