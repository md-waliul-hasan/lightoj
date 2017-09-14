#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi  2*acos(0.0)
int main()
{
	double len,wid,r,otivuj,s,theta;
	ll tc;
	scanf("%lld",&tc);
	for(ll i=1;i<=tc;i++)
	{
		char c;
		cin>>len>>c>>wid;
		
		otivuj=sqrt(len*len+wid*wid);
		r=otivuj/2.0;
		theta=acos((2*r*r-wid*wid)/(2.0*r*r));
		s=r*theta;
		double x=200/(s+len);
		
		printf("Case %lld: %.10lf %.10lf\n",i,len*x,wid*x );

	}
}
