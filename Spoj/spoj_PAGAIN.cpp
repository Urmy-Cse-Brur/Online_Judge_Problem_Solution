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

#define N 66536
bool a[N];
vi prime;

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
    prime.pb(2);
    for(i=3;i<=N;i+=2){
        if(a[i]) prime.pb(i);
    }
}

ll segSieve(ll n){
    ll  i, m;
    while(true){
        m=n;
        for(i=0;prime[i]*prime[i]<=n && i<prime.sz;i++){
            if(m%prime[i]==0){
                m/=prime[i];
                break;
            }
        }
        if(m==n) return n;
        n--;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    ll n, t, x;
    sieve();
    cin>>t;
    while(t--){
        scanf("%llu", &n);
        x=segSieve(n-1);
        printf("%llu\n", x);
    }
    return 0;
}
