//pattern is visible at each level like 4^2,4^4,4^8...
//use of modulous
//(a*b)%M=(a%M * b%M)%M
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll M=1000000007;
int main()
{
    
    	ll k;
    	cin>>k;
    	ll res=1,power=1;
    	for(ll i=1;i<k;i++)
    	{
    		res=((res%M)*(((res%M)*16)%M)%M);
		}
		res=((res%M)*6)%M;
		cout<<res<<"\n";
}
