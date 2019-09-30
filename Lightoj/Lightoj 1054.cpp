#include<bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ll, int> li;
typedef pair<int, ll> il;
typedef vector<ii> vii;
typedef vector<il> vil;
typedef vector<li> vli;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz size()
#define MOD 1000000007
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};

#define N 46400
vi v;
bool a[N+1];

void sieve ( ){
     int i, j, s;
     for(i=0;i<N;i++)a[i]=true;
     s=sqrt(N);
     for (i=3;i<=s;i++){
        if (a[i]==true){
            for (j=i*i;j<=N;j+=i)
                a[j]=false;
        }
    }
    a[2]=true;
    v.pb(2);
    for(i=3;i<=N;i+=2){
        if(a[i]) v.pb(i);
    }
}

ll big_mod(ll b, ll p){
        ll ans = 1;
        b=(b%MOD);
        while (p>0){
            if(p & 1)
            ans=(ans*b) % MOD;
            p=p>>1;
            b=(b*b) % MOD;
        }
    return ans;
}

ll modInverse(ll n){
    return big_mod(n, MOD-2);
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    sieve();
    ll n, m, i, t, c, ans, x, y, sum, cnt=0;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld", &n, &m);
        sum=1;
        map <ll, ll> p;
        map <ll, ll> :: iterator it;
        for(i=0;v[i]*v[i]<=n && i<v.sz;i++){
            c=0;
            while(n%v[i]==0){
                n/=v[i];
                c++;
            }
            if(c>0) p[v[i]]=(c*m);
        }
        if(n>1)p[n]=m;
        
        for(it=p.begin();it!=p.end();it++){
            x=big_mod(it->ff, it->ss+1);
            y=modInverse(it->ff-1);
            ans=(((x-1+MOD)%MOD) * ((y+MOD)%MOD))%MOD;
            sum=((sum%MOD)*(ans%MOD))%MOD;
        }
        printf("Case %lld: %lld\n", ++cnt, sum);
    }
    return 0;
}
