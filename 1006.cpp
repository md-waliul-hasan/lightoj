//my first dp code! 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c, d, e, f;
ll dp[60006];
ll fn( int n ) {
    if( n == 0 ) { dp[0]=a% 10000007; return dp[0];}
    if( n == 1 ) { dp[1]=b% 10000007; return dp[1];}
    if( n == 2 ) { dp[2]=c% 10000007; return dp[2];}
    if( n == 3 ) { dp[3]=d% 10000007; return dp[3];}
    if( n == 4 ) { dp[4]=e% 10000007; return dp[4];}
    if( n == 5 ) { dp[5]=f% 10000007; return dp[5];}
    if(dp[n]!=-1)return dp[n];
    else {
            dp[n]=( fn(n-1)% 10000007 + fn(n-2)% 10000007 + fn(n-3)% 10000007 + fn(n-4)% 10000007 + fn(n-5)% 10000007 + fn(n-6)% 10000007 );
    return dp[n];
}
}
int main() {
    ll n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        for(ll i=0;i<60006;i++)dp[i]=-1;
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
