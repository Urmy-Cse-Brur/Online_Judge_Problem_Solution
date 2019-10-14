#include<bits/stdc++.h>
#include <bitset>
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

int N=99998953;
int status[100000000/32+2];
vi prime;

bool Check(int N, int pos){
    return (bool) (N & (1<<pos));
}

int Set(int N, int pos) {
    return N=N | (1<<pos);
}

void sieve(){
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
        if(Check(status[i>>5], i&31)==0) prime.pb(i);//cout<<i<<endl;
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    sieve();
    for(int i=0;i<prime.sz;i+=100) cout<<prime[i]<<endl;
    return 0;
}
