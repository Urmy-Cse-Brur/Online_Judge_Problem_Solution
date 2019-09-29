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
    int n, q, ans, i, f, k;
    cin>>q;
    while(q--){
        cin>>n>>k;
        f=0;
        int a[105];
        for(i=0;i<n;i++)cin>>a[i];
        sort(a, a+n);
        int d=a[0]+k;
        for(i=n-1;i>=0;i--){
            if(abs(a[i]-d)>k){
                f=1;break;
            }
        }
        if(f==1)cout<<"-1"<<endl;
        else cout<<d<<endl;
    }
    return 0;
}
