#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi acos(-1.0);
#define eps 1e-18
double n,c,L,l,d,r,s,ans;

double bs()
{
	double hi,lo,mid;
	hi=2.0*pi ;
	lo=0.0;
	while(abs(hi-lo)>eps)
	{
		mid=(hi+lo)/2;
		r=s/mid;
		d=r*sin(mid/2.0);
		ans=r-r*cos(mid/2.0);
		if(abs(d-l)<eps)
			return ans;
		if(d>l)lo=mid;
		else hi=mid;
	}
}
int main()
{
	ll k,tc;
	cin>>tc;
	for(k=1;k<=tc;k++){
	scanf("%lf%lf%lf",&L,&n,&c);
	s=L*(1+n*c);
	l=L/2.0;
	double res=bs();
	printf("Case %lld: %.10lf\n", k,res);
}
}
