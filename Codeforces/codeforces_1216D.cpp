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


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    int n, i, j, mx=0;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
        mx=max(a[i], mx);
    }
    vi v;
    for(i=0;i<n;i++){
        if(mx-a[i]>0)v.pb(mx-a[i]);
    }
    int gcd=0;
    ll sum=0;
    for(i=0;i<v.sz;i++){
        gcd=__gcd(gcd,v[i]);
    }
    for(i=0;i<v.sz;i++){
        sum+=(v[i]/gcd);
    }
    cout<<sum<<" "<<gcd<<endl;
    return 0;
}
