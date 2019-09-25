#include<bits/stdc++.h>
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
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};


int main()
{
    #ifndef ONLINE_JUDGE
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);
    #endif
    unsigned long n, i, j, div, s, c, divs, x, t, k, a, b, ans;
    n=100000;
    vector <unsigned long> v[n];
    vi q;
    for(i=2;i<=n;i++){
       s=i; div=1;divs=1;
       for(j=2;j<=sqrt(s);j++){
           c=0;
           while(s%j==0){
               s/=j;
               c++;
           }
           if(c>0){
                div*=(c+1);
                divs*=(c+c+1);
            }
       }
       if(s!=1) {
            div+=div;
            divs*=3;
        }
        x=sqrt(i);
       if(div%2!=0 && x*x!=i)v[div].pb(i);
       v[divs].pb(i*i);
    }
    v[1].pb(1);
    scanf("%lu", &t);
    while(t--){
        cin>>k>>a>>b;
        vector<unsigned long int>::iterator lower,upper;
        lower = lower_bound(v[k].begin(), v[k].end(), a);
        upper = upper_bound(v[k].begin(), v[k].end(), b);
        cout<<(upper-v[k].begin())-(lower-v[k].begin())<<endl;
    }
    return 0;
}
