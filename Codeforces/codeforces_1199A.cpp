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
    int n, x, y, f, i, a[100010], j, c, g, ans=1;
    cin>>n>>x>>y;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++){
        j=i+1;c=f=g=0;
        while(j<n){
            if(a[i]>a[j]){
                f=1;break;
            }else c++;
            j++;
            if(c==y)break;
        } //cout<<i<<endl;
        j=i-1;c=0;
        while(j>=0){
            if(a[i]>a[j]){
                g=1;break;
            }else c++;
            j--;
            if(c==x)break;
        }
        if(f==0 && g==0){
            ans=i+1;break;
        } //cout<<i<<endl;
    }
    if(x==0 && y==0)ans=1;
    else if(y==0)ans=1;
   // else if(x==0)
        cout<<ans<<endl;
    return 0;
}
