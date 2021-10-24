//here we calculate total time is there if it is even we can share equal but if is odd then there will difference
//of 1.
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
    	ll a,b,c;
    	cin>>a>>b>>c;
    	ll sum;
    	sum=0;
    	sum=sum+a+b+b+c+c+c;
    	if((sum%2)==0)
    	cout<<0;
    	else
    	cout<<1;
    	cout<<"\n";
	}
}
