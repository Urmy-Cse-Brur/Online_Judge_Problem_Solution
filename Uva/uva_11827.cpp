#include<bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef pair<ll, int> li;
typedef pair<int, ll> il;
typedef vector<ii> vii;
typedef vector<il> vil;
typedef vector<li> vli;

#define ff first
#define eps 0.0000000000000001
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
   // freopen ("in.txt", "r", stdin);
   // freopen ("out.txt", "w", stdout);
    #endif
    int n, m, i, j, sq;
    cin>>n;
    getchar();
    while(n--){
        map <int, int> mp;
        map <int, int> :: reverse_iterator it;
        string s;
        getline(cin, s);
        stringstream ss(s);
        while(ss>>m){
            sq=sqrt(m);
            for(i=1;i<=sq;i++){
                if(m%i==0){
                    if(i==m/i)mp[i]++;
                    else{
                        mp[i]++;
                        mp[m/i]++;
                    }
                }
            }
        }
        for(it=mp.rbegin();it!=mp.rend();it++){
            if(it->ss>=2){
                cout<<it->ff<<endl;
                break;
            }
        }

        mp.clear();
    }
    return 0;
}
