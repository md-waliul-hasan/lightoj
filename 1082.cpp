#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mx 100005
#define huge 999999999

ll a[mx];
ll tree[mx*3];
void init(ll node,ll s,ll e)
{
   if(s==e){
       tree[node]=a[s];
       return ;
   }
   ll left=node*2;
   ll right=node*2 +1;
   ll mid=(s+e) /2;
   init(left,s,mid);
   init(right,mid+1,e);
   tree[node]=min(tree[left],tree[right]);
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b)return huge;
    if(b>=i && e<=j)return tree[node];
    ll left=node*2;
    ll right=node*2 +1;
    ll mid = (b+e)/2;
    ll p1=query(left,b,mid,i,j);
    ll p2=query(right,mid+1,e,i,j);
    return min(p1,p2);
}

int main()
{
   ll i,n,t,x,y,tc;
   scanf("%lld",&tc);
   for(ll k=1;k<=tc;k++){
   scanf("%lld%lld",&n,&t);
   for(i=1;i<=n;i++)cin>>a[i];
   init(1,1,n);
   printf("Case %lld:\n",k);
   for(i=0;i<t;i++)
   {
       scanf("%lld%lld",&x,&y);
       ll ans=query(1,1,n,x,y);
       printf("%lld\n",ans);
   }
}
return 0;
}





