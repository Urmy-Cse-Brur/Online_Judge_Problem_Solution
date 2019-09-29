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
#define PI acos(-1.0)
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
    long long int a[10], i, j, d, dif, sum=0, x, y;
    for(i=0;i<3;i++)cin>>a[i];
        cin>>d;
    sort(a,a+3);
    x=abs(a[0]-a[1]);
    y=abs(a[1]-a[2]);
    if(x<d)sum+=abs(d-x);
    if(y<d)sum+=abs(d-y);
    cout<<sum;
    return 0;
}
