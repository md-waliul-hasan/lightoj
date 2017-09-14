#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1000000000000000000

ll f(ll n)
{
	ll cnt=0;
	while(n)
	{
		cnt+=n/5;
		n/=5;
	}
	return cnt;
}

int main()
{
	ll t,q,get;
	scanf("%lld",&t);
	for(ll k=1;k<=t;k++)
	{
		scanf("%lld",&q);
		ll hi=mx,lo=1,mid;
		while(lo<=hi)
		{
			mid=(hi+lo)/2;
			if(f(mid)>=q){
				get=mid;
				hi=mid-1;
			}
			else lo=mid+1;
		}
		if(f(get)==q)printf("Case %lld: %lld\n",k,get);
		else 
			printf("Case %lld: impossible\n", k);
	}
}
