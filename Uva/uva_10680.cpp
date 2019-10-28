#include<bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef pair<ll, int> li;
typedef pair<int, ll> il;
typedef vector<ii> vii;
typedef vector<il> vil;
typedef vector<li> vli;

const double pi = acos(-1.0);
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz size()
#define MOD 1000000007
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};

#define N 1000000
bool a[N+1];
vi prime;

void sieve(){
     int i, j, s;
     for(i=0;i<N;i++)a[i]=true;
     s=sqrt(N);
     for (i=3;i<=s;i+=2){
        if (a[i]==true){
            for (j=i*i;j<=N;j+=(2*i)) a[j]=false;
        }
    }
    prime.pb(2);
    for(i=3;i<=N;i+=2){
        if(a[i])prime.pb(i);
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    int n;
    sieve();
    while(cin>>n){
        if(n==0)break;
        int i, x, j, two=0 ,five=0;
        ll ans=1, w, p;
        vll v;
        map<int,int>mp;
        for(i=0;i<prime.sz&&prime[i]<=n;i++){
            p=1;
            while(p<=n){
                p*=prime[i];
                if(prime[i]==2)two++;
                if(prime[i]==5)five++;
            }
            v.pb(p/prime[i]);
        }
        two--;five--;
        if(two<=five)x=two; 
        else x=five;
        for(i=0;i<v.sz;i++){
            w=1;
            if(v[i]%2==0 && x>0){
                for(j=1;j<=x;j++)w*=2;
                v[i]/=w;
            }
            if(v[i]%5==0 && x>0){
                for(j=1;j<=x;j++)w*=5;
                v[i]/=w;
            }
            p=v[i]%10; 
            ans*=p;
            ans%=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
