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

#define N 5473
bool a[1999999+1];
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
    sieve();
    segSieve(2, 2000000);
    segSieve(2000001, 4000000);
    segSieve(4000001, 6000000);
    segSieve(6000001, 8000000);
    segSieve(8000001, 10000000);
    segSieve(10000001, 12000000);
    segSieve(12000001, 14000000);
    segSieve(14000001, 16000000);
    segSieve(16000001, 18000000);
    segSieve(18000001, 20000000);
    vector <pair <ll, ll> > pair; ll i, n, x;
    for(i=1;i<vec.sz;i++) {
        x=vec[i]-vec[i-1];
        if(x==2) pair.pb(mp(vec[i-1], vec[i]));
    }
    while(cin>>n){
        n--;
        printf("(%lld, %lld)\n", pair[n].ff, pair[n].ss);
    }
    return 0;
}
