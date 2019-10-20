#include<bits/stdc++.h>
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
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};

#define N 1000007
bool a[N];
vector <ll> prime, vec;

void sieve ( ){
     ll i, j, s;
     for(i=0;i<N;i++)a[i]=true;
     s=sqrt(N);
     for (i=3;i<=s;i++){
        if (a[i]==true){
            for (j=i*i;j<=N;j+=i) a[j]=false;
        }
    }
    prime.pb(2);
    for(i=3;i<=N;i+=2){
        if(a[i]) prime.pb(i);
    }
}

void segSieve(ll l, ll r){
    bool a[r-l+1];
    ll i, j, base,cp;
    for(i=0;i<r-l+1;i++) a[i]=true;
    if(l==1) a[0]=false;
    for(i=0;prime[i]*prime[i]<=r;i++){
        cp=prime[i];
        base=(l/cp)*cp;
        if(base<l) base+=cp;
        for(j=base;j<=r;j+=cp) a[j-l]=false;
        if(base==cp) a[base-l]=true;
    }
    for(i=0;i<r-l+1;i++){
        if(a[i]) vec.pb(i+l);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    ll l, r, i, a, b, c, d, x;
    sieve();
    while(cin>>l>>r){
        segSieve(l, r);
        if(vec.sz<=1) printf("There are no adjacent primes.\n");
        else if(vec.sz==2) printf("%lld,%lld are closest, %lld,%lld are most distant.\n", vec[0], vec[1], vec[0], vec[1]);
        else{
            ll mx=0, mn=LONG_LONG_MAX;
            for(i=0;i<vec.sz-1;i++){
                x=vec[i+1]-vec[i];
                if(x>mx){
                    mx=x;
                    c=vec[i];
                    d=vec[i+1];
                }
                if(x<mn){
                    mn=x;
                    a=vec[i];
                    b=vec[i+1];
                }
            }
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n", a, b, c, d);
        }
        vec.clear();
    }
    return 0;
}
