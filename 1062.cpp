#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define eps 1e-9

double f(double d,double x,double y)
{
	double h1=sqrt((x*x)-(d*d));
	double h2=sqrt((y*y)-(d*d));
	return ((h1*h2)/(h1+h2));
}

int main()
{
	double x,y,c;
	ll tc;
	scanf("%lld",&tc);
	for(ll i=1;i<=tc;i++){
		scanf("%lf%lf%lf",&x,&y,&c);
	
		double hi=min(x,y);
		double mid,lo=0.0;

		while(fabs(hi-lo)>eps)
		{
			mid=(hi+lo)/2.0;
			
			if(f(mid,x,y)<=c)
				hi=mid;
			else lo=mid;
		}

		printf("Case %lld: %.10lf\n",i, mid);
	}

}
