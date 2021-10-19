//In this question one node will always be in centre of the graph and graph will be like a star.
//so we have to find that one node which is not in centre of each m restrictions
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,m;
    	cin>>n>>m;
    	bool node_not_common[n+1];
    	memset(node_not_common,false,sizeof(node_not_common));
    	for(ll i=1;i<=m;i++)
    	{
    		ll a,b,c;
    		cin>>a>>b>>c;
    		 //node_not_common[a]=true;
    		node_not_common[b]=true;
    	//	node_not_common[c]=true;
		}
		ll center_node;
    	for(ll i=1;i<=n;i++)
    	{
    		if(node_not_common[i]==false)
    		{
    			center_node=i;
    			break;
			}
		}
		for(ll i=1;i<=n;i++)
		{
			if(i!=center_node)
			cout<<center_node<<" "<<i<<"\n";
		}
	}
}
