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
	int n;
	cin>>n;
	while(n--){
		int s, i, e, ans, x;
		cin>>s>>i>>e;
		ans=(s+e+i)/2;
		x=(s+e)-ans;
		if(x>e+1)x=e+1;
		if(e==0){
			if(s>i) x=1;
			else x=0;
		}
		if(x<0)x=0;
		cout<<x<<endl;
	}
	return 0;
}
