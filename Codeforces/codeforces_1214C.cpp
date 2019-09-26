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
	int n, i, c=0;
	string s; 
	stack <int> S;
	cin>>n>>s;
	for(i=0;i<s.size();i++){
		if(s[i]=='(') S.push(s[i]);
		else{
			if(S.empty())c++;
			else S.pop();
			if(c>1) break;
		}
	}
	if(c>1) cout<<"No"<<endl;
	else if(c==1 && S.size()!=1)cout<<"No"<<endl;
	else if(c==1 && S.size()==1)cout<<"Yes"<<endl;
	else if(!S.empty())cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
	return 0;
}
