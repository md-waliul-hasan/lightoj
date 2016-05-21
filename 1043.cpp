#include<bits/stdc++.h>
using namespace std;
typedef double ll;
#define     eps  1e-9
ll bs(ll ab,ll ac,ll bc,ll r)
{
    ll lo,hi,mid,ad,ae,de,p,q,a1,a2,r2,r4,P,Q,R,S;
    lo=0.0;
    hi=ab;
    while((hi-lo)>eps)
    {
        mid=(lo+hi)/2.0;
        ae=(mid*ac)/ab;
        de=(mid*bc) /ab;
        p=(mid+ae+de)/2.0;
        q=(ab+bc+ac)/2.0;

        a1=sqrt(p*(p-mid)*(p-ae)*(p-de));
        ll a3=sqrt(q*(q-ab)*(q-ac)*(q-bc));
        a2=a3-a1;
        /*ll bd=ab-mid;
        ll ce=ac-ae;

        ll A=acos((ab*ab+bc*bc-ac*ac)/(2*ab*bc));
        ll h=bd*sin(A);
        a2=h*(de+bc)/2;*/
       /* P=bc;
        Q=de;
        R=bd;
        S=ce;
        a2=((P+Q)/(4*P-4*Q)) * sqrt( 2*(R*R*S*S + R*R*(P-Q)*(P-Q) + S*S*(P-Q)*(P-Q)) - (R*R*R*R + S*S*S*S + (P-Q)*(P-Q)*(P-Q)*(P-Q)) );
*/
       // a2=((de+bc)/2)*sqrt((bd*bd)-(((bd*bd)-(ce*ce)-(bc-de)*(bc-de))/(2*(bc-de))));
        r4=a1/a2;
        if(r4<r)lo=mid;
        else if(r4>r)hi=mid;
    }
    return mid;
}

int main()
{
    int n;
    ll ab,ac,bc,de,ad,ae,r,r1,r2,a1,a2;
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>ab>>ac>>bc>>r;
    printf("Case %d: %.9lf\n",i,(bs(ab,ac,bc,r)));
    }
    return 0;
}
