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
    freopen ("output.txt", "w", stdout);
    #endif
    long long int n, i;
    while(cin>>n){
    	if(n==0)break;
    	if(n<0)n=abs(n);
    	if(n==1)cout<<"-1"<<endl;
    	else{
    		set <long long int> s;
    		for(i=2;i<=sqrt(n);i++){
    			while(n%i==0){
    				n/=i;
    				s.insert(i);
    			}
    		}
    		if(n!=1)s.insert(n);
    		if(s.size()==1)cout<<"-1"<<endl;
    		else{
    			set <long long int> :: reverse_iterator it;
    			for(it=s.rbegin();it!=s.rend();it--){
    				cout<<*it<<endl;
    				break;
    			}
    		}
    	}
    }
    return 0;
}
