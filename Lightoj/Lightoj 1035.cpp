#include<bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned long ul;
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
#define MOD 1000000007
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
#define N 5000001

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    int t, n, i, j, c, x, f, cnt=0;
    vi v;
    v.pb(2); v.pb(3); v.pb(5); v.pb(7);
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        map <int, int> mp;
        map <int, int> :: iterator it;
        for(i=2;i<=n;i++){
            x=i;
            for(j=0;v[j]*v[j]<=x && j<v.sz;j++){
                c=0;
                while(x%v[j]==0){
                    x/=v[j];
                    c++;
                }
                if(c>0)mp[v[j]]+=c;
            }
            if(x!=1)mp[x]++;
        }
        f=0;
        printf("Case %d: %d = ", ++cnt, n);
        for(it=mp.begin(); it!=mp.end(); it++){
            if(f) printf(" * ");
            printf("%d (%d)", it->ff, it->ss);
            f=1;
        }
        printf("\n");
    }
    return 0;
}
