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
    int n, cnt=0;
    while(cin>>n){
        if(n==0) break;
        int a[n+1][n+1], i, j, x, k, sum;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++)cin>>a[i][j];
        }
        x=n/2; vi v;
        if(n%2!=0)x++;
        for(i=1;i<=x;i++){
            j=i;
            sum=0;
            while(j<=n){
                sum+=a[i][j];j++;
            }
            j=i+1; 
            while(j<=n){
                sum+=a[j][i];j++;
            }
            j=i+1;
            while(j<=n){
                sum+=a[n][j];j++;
            }
            j=i+1;
            while(j<n){
                sum+=a[j][n];j++;
            }
            v.pb(sum);
            n--;
        }
        printf("Case %d:", ++cnt);
        for(i=0;i<v.sz;i++)cout<<" "<<v[i];
        cout<<endl;
    }
    return 0;
}
