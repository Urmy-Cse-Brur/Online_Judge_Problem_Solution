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

#define ff first
#define eps 0.0000000000000001
const double pi = acos(-1.0);
#define ss second
#define pb push_back
#define mp make_pair
#define sz size()
#define MOD 1000000007
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    ll n, gcd, x, p, i, s, t;
    while(cin>>n){
        if(n==0)break;
        vll v;
        v.pb(n);
        gcd=n;
        while(cin>>x){
            if(x==0)break;
            gcd=__gcd(x, gcd);
            v.pb(x);
        }
        sort(v.begin(), v.end());
        gcd=0;
        for(i=1;i<v.sz;i++){
            if((abs(v[0])==abs(v[i])))p=v[i];
            else p=v[0]-v[i];
            if(p<0)p=abs(p);
            gcd=__gcd(p, gcd);
        }
        cout<<gcd<<endl;
    }
    return 0;
}
