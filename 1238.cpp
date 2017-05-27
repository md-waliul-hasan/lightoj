#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<ll,ll> 
ll fx[]={1,-1,0,0};
ll fy[]={0,0,1,-1};
ll cell[1005][1005];
ll d[1005][1005];
ll vis[1005][1005];
ll row,col;
ll bfs(ll sx,ll sy,ll r,ll s)
{
	for(ll i=0;i<row;i++)for(ll j=0;j<col;j++)vis[i][j]=0;
	d[sx][sy]=0;
	vis[sx][sy]=1;
	queue<pii>q;
	q.push(pii(sx,sy));
	while(!q.empty())
	{
		pii top=q.front();q.pop();
		if(top.first==r && top.second==s)
			return d[r][s];
		for(ll k=0;k<4;k++)
		{
			ll tx=top.first+fx[k];
			ll ty=top.second+fy[k];
			if(tx>=0 && ty>=0 && ty<col && tx<row && cell[tx][ty]!=-1 && vis[tx][ty]==0)
			{
				vis[tx][ty]=1;
				d[tx][ty]=d[top.first][top.second]+1;
				q.push(pii(tx,ty));
			}
		}
	}
	return -1;
}
string s[1004];
int main()
{
	//freopen("output.txt","w",stdout);
	ll f11,f12,f3,f4,i,j,f22,f21,f31,f32,tc;
	cin>>tc;
	for(ll k=1;k<=tc;k++){
    cin>>row>>col;
    for(i=0;i<row;i++)for(j=0;j<col;j++)cell[i][j]=0;
    for(i=0;i<row;i++)cin>>s[i];
    for(i=0;i<row;i++)
    	for(j=0;j<s[i].size();j++)
    	{
            if(s[i][j]=='#')cell[i][j]=-1;
            else if(s[i][j]=='m')cell[i][j]=-1;
            else if(s[i][j]=='a'){f11=i;f12=j;}
            else if(s[i][j]=='h'){f3=i;f4=j;}
            else if(s[i][j]=='b'){f21=i;f22=j;}
            else if(s[i][j]=='c'){f31=i;f32=j;}
    	}
    ll ans1=bfs(f11,f12,f3,f4);
    ll ans2=bfs(f21,f22,f3,f4);
    ll ans3=bfs(f31,f32,f3,f4);
    ll ans=max(max(ans1,ans2),ans3);
   printf("Case %lld: %lld\n",k,ans);
}
return 0;
}
