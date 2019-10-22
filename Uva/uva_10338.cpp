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
    int tc, n, i, cnt=0;
    ull fact, x;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        map <char, int> mp;
        map <char, int> :: iterator it;
        for(i=0;i<s.sz;i++)mp[s[i]]++;
        n=s.sz;fact=1;
        for(i=1;i<=n;i++)fact*=i;
        for(it=mp.begin();it!=mp.end();it++){
            x=1;
            if(it->ss>1){
                for(i=2;i<=it->ss;i++)x*=i;
                fact/=x;
            }
        }
        printf("Data set %d: %llu\n", ++cnt, fact);
    }
    return 0;
}
