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
   // freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);
    #endif
    ull k, sum=0, i, j, a[130], x, mx=0;
    string s;
    cin>>s;
    cin>>k;
    for(i=97;i<=122;i++){
        cin>>x;
        mx=max(x,mx);
        a[i]=x;
    }
    for(i=0,j=1;i<s.sz;i++,j++)sum+=(j*a[s[i]]);
    for(i=s.sz+1;i<=s.sz+k;i++)sum+=(i*mx);
    cout<<sum<<endl;
    return 0;
}
