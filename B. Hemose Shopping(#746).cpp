//we have to check the range from n-x to x-1 bcz outside this range we can adjust any number to its position ;
//so n-x to x-1 we have to check if it is equal to actual array after sorting so we dont neeed to swap it and if it 
//is not then it is not possible
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,x;
    	cin>>n>>x;
    	vector<ll>vect;
    	vector<ll>actual;
    	for(ll i=0;i<n;i++)
    	{
    		ll a;
    		cin>>a;
    		vect.push_back(a);
    		actual.push_back(a);
		}
		
		sort(vect.begin(),vect.end());
		bool flag=true;
		for(ll i=n-x;i<x;i++)
		{
		if(vect[i]!=actual[i])
		{
			flag=false;
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
