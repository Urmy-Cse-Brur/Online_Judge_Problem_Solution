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

#define N 1000
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


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    sieve();
    ll n, i, t, sum, cnt=0, j, c;
    vii vs;
    vs.pb(mp(1, 1));
    for(j=2;j<=1000;j++){
        n=j;sum=1;
        for(i=0;v[i]*v[i]<=n && i<v.sz;i++){
            c=0;
            while(n%v[i]==0){
                n/=v[i];
                c++;
            }
            if(c>0) sum*=(c+1);
        }
        if(n>1)sum*=2;
        vs.pb(mp(j, sum));
    }
    for(i=1;i<1000;i++){
        for(j=0;j<(1000-i);j++){
            if(vs[j].ss>vs[j+1].ss){
                swap(vs[j].ss, vs[j+1].ss);
                swap(vs[j].ff, vs[j+1].ff);
            }
            else if(vs[j].ss==vs[j+1].ss){
                if(vs[j].ff<vs[j+1].ff){
                    swap(vs[j].ss, vs[j+1].ss);
                    swap(vs[j].ff, vs[j+1].ff);
                }
            }
        }
    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<"Case "<<++cnt<<": "<<vs[n-1].ff<<endl;
    }
   
    return 0;
}
