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
    long long int n, m, i, sum=0, x;
    cin>>n>>m;
    long long int a[m+1];
    for(i=0;i<m;i++) cin>>a[i];
    x=1;
    for(i=0;i<m;i++){
        if(a[i]>=x)sum+=(a[i]-x);
        else sum+=((n-x)+1+(a[i]-1));
        x=a[i];
    }
    cout<<sum<<endl;
    return 0;
}
