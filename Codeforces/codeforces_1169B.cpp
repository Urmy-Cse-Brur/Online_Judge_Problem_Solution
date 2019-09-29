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
    int a[300010], b[300010], f=0, x, c=0, n, i, m;
    cin>>m>>n;
    for(i=0;i<n;i++){
    	cin>>a[i];
    	cin>>b[i];
    }
    map <int, int> mp;
    set <int> s;
    set <int> :: iterator it;
    x=a[0];
    for(i=0;i<n;i++){
    	if(a[i]!=x && b[i]!=x){
    		s.insert(a[i]);
    		s.insert(b[i]);
    		mp[a[i]]++;
    		mp[b[i]]++;
    	}
    	else c++;
    }
 	for(it=s.begin(); it!=s.end(); it++){
 		if(c+mp[*it]==n){
 			f=1;
 			break;
 		}
 	}
 	if(f==1 || c==n){
 		cout<<"YES"<<endl;
 		return 0;
 	}
 	x=b[0];mp.clear();s.clear();c=0;f=0;
 	for(i=0;i<n;i++){
    	if(a[i]!=x && b[i]!=x){
    		s.insert(a[i]);
    		s.insert(b[i]);
    		mp[a[i]]++;
    		mp[b[i]]++;
    	}
    	else c++;
    }
 	for(it=s.begin(); it!=s.end(); it++){
 		if(c+mp[*it]==n){
 			f=1;
 			break;
 		}
 	}
 	if(f==1 || c==n)
 		cout<<"YES"<<endl;
 	else
 		cout<<"NO"<<endl;
    return 0;
}
