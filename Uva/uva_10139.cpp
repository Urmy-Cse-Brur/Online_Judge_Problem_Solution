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

int N=50000;
int status[2000+2];
vi prime;

bool Check(int N, int pos){
    return (bool) (N & (1<<pos));
}

int Set(int N, int pos) {
    return N=N | (1<<pos);
}

void sieve ( ){
     int i, j, s;
     s=sqrt(N);
     for (i=3;i<=s;i+=2){
        if (Check(status[i>>5], i&31)==0){
            for (j=i*i;j<=N;j+=(i<<1))
                status[j>>5]=Set(status[j>>5], j&31);
        }
    }
    prime.pb(2);
    for(i=3;i<=N;i+=2){
        if(Check(status[i>>5], i&31)==0) prime.pb(i);
    }
}

int get_power(int n, int p, int c){
    int i, pow=0;
        while(n>=p){
            n/=p;
            pow+=n;
        }
    return pow;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    sieve();
    int n, m, i, c, x, f;
    while(cin>>n>>m){
        f=0;
        if(m==0) printf("%d does not divide %d!\n", m, n);
        else if(m<=n) printf("%d divides %d!\n", m, n);
        else{
            x=m;
            for(i=0;prime[i]*prime[i]<=m && i<prime.sz;i++){
                c=0;
                while(m%prime[i]==0){
                    m/=prime[i];
                    c++;
                }
                if(c>0){
                    if(get_power(n, prime[i], c)<c){
                        printf("%d does not divide %d!\n", x, n);
                        f=1;
                        break;
                    }
                }
            }
            if(f==0){
                if(m>1 && get_power(n, m, 1)<1) printf("%d does not divide %d!\n", x, n);
                else printf("%d divides %d!\n", x, n);
            }
        }
    }
    return 0;
}
