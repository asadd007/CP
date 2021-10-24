//here we calculate total ones and zeroes
//if zeroes is >0 so we have to choice to take it or not to take it that is every zero has 2 choices
//so powerof(2,zero) will give total permutaion
//total ones will multiply with choices of zeroes bcz we ahave one option to every one not to take it
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
//	 ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll arr[n],sum=0,zero=0,ones=0;
    	for(ll i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		sum=sum+arr[i];
    		if(arr[i]==0)
    		zero++;
    		if(arr[i]==1)
    		ones++;
		}
		ll count=0;
		if(zero>0)
		{
			ll cal=(ll)(pow(2, zero) + 0.5);
			count+=(cal*ones);
		}
		else
		count+=ones;
		cout<<count<<"\n";
		
    }
}
