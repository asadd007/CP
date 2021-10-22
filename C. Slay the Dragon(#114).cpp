//here ew have to check just smallest and just biggest or equal of x in array and check both
//total coins in just smallest and just biggest and take minimum of both
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
		ll n;
		cin>>n;
		ll a[n],totstr=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			totstr+=a[i];
		}
		ll m;
		cin>>m;
		sort(a,a+n);
		for(ll i=0;i<m;i++)
		{
			ll x,y;
			cin>>x>>y;
			ll lb=lower_bound(a,a+n,x)-a;
			ll coins=0;
			if(lb<n)
			{
				if(y>(totstr-a[lb]))
				coins+=y-totstr+a[lb];
			}
			else
			{
				coins+=x-a[n-1];
				if(y>(totstr-a[n-1]))
				coins+=y-totstr+a[n-1];
			}
			ll coins1=x+y+1;
        if (lb<n&&lb>=1)
        { 
		ll coins2=0;
        ll num=a[lb-1];
        
           if(x>num)
        	coins2+=x-num;
        	
        	if(y>(totstr-num))
				coins2+=y-totstr+num;
				
        	coins1=min(coins1,coins2);
		}
			cout<<min(coins,coins1)<<"\n";
		}
}
