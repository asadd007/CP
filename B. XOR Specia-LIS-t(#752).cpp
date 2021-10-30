//key idea behind is that when we take xor of 1^1=0 and
//we can take divide whole array into size of 1 but there are 2 cases
// if size is even then we can divide into 1 of equal part and xor of even 1's=0;
//in case of size odd we have to club 2 elements if they are not LIS and size will become even and xor=0
//but if we canot find 2 elements then it is not possible
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(n%2==0)
	cout<<"YES";
	else
	{
		ll flag=0;
		for(ll i=1;i<n;i++)
		{
			if(arr[i]<=arr[i-1])
			{
				flag=1;
				break;
			}
		}
		if(flag)
		cout<<"YES";
		else
		cout<<"NO";
	}
	cout<<"\n";
}
}
