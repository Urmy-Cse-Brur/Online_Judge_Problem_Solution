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
        cin>>n;
        ans=0;
        int a[200010];
        map <int, int> mp;
        map <int, int> :: iterator it;
        for(i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        vi v;
        for(it=mp.begin();it!=mp.end();it++) v.pb(it->second);
        sort(v.begin(), v.end());
        map <int, int> m;
        for(i=v.size()-1;i>=0;i--){
            //cout<<v[i]<<endl;
            if(m[v[i]]==0){ 
                ans+=v[i];
                m[v[i]]=-1;
                f=v[i];
            }
            else{
                if(v[i]>1) {
                    ans+=(f-1);
                    f--;
                    m[f]=-1;
                   // cout<<v[i]<<endl;
                }
            }
            if(f==0)break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
