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
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    int  l, r, i, n, c, re, f=0;
    cin>>l>>r;
    for(i=l;i<=r;i++){
        set <int> s;
        n=i; c=0;
        while(n>0){
            re=n%10;
            n/=10;
            c++;
            s.insert(re);
        }
        if(c==s.sz){
            f=1;break;
        }
    }
    if(f==1) cout<<i<<endl;
    else cout<<"-1"<<endl;
    return 0;
}
