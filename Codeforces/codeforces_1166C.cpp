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
#define EPS 1e-14
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    int n, x, i, j, m;
    cin>>n;
    m=n;
    vector <int> v;
    while(m--){
        cin>>x;
        x=abs(x);
        v.pb(x);
    }
    sort(v.begin(),v.end());
    i=0;j=n-1;
    ll p,c=0;
    int low, high, index, mid;
    while(i<n){
        p=v[i]*2;
        index=-1;low=0;high=n-1;
        while(low<=high){
            mid=(low+high)/2;
            if(v[mid]<=p){
                index=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        if(index>=0)c+=(index-i);
        i++;
    }
    cout<<c;
    return 0;
}
