#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[500005];
int main()
{
	ll t,n,i,j,k;
	scanf("%lld",&t);
	for(k=1;k<=t;k++)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		sort(a,a+n);
		ll p,cnt=0;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				ll  val=(a[i]+a[j])-1;
				p=upper_bound(a,a+n,val)-a;
				
				if(p>j )cnt+=(p-j-1);
			}
		}
		printf("Case %lld: %lld\n",k,cnt );
	}
}
