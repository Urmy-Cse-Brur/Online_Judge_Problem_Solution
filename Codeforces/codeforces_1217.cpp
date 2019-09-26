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
   // freopen ("out.txt", "w", stdout);
    #endif
    int t, n, d, h, x, ans, s, i;
    cin>>t;
    while(t--){
    	cin>>n>>x;
    	vi max, diff;
    	for(i=0;i<n;i++){
    		cin>>d>>h;
    		max.pb(d);
    		diff.pb(d-h);
    	}
    	sort(max.begin(), max.end());
    	sort(diff.begin(), diff.end());
    	s=x-max[max.size()-1];
    	if(s<=0)ans=1;
    	else{

    		if(diff.back()<=0) ans=-1;
    		else{
                ans=s/diff.back();
                if(s%diff.back()!=0)ans++;
                ans++;
    		}
    	}
    	cout<<ans<<endl;
    }
	return 0;
}
