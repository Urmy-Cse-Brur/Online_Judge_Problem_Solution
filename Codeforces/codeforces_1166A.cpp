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
#define MAX 500010

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    #endif
    int n, i, a=0, b=0, ans, f, x, y;
    string s;
    cin>>n;
    map <int, int> mp;
    map <int, int> :: iterator it;
    map <int, int> mpa;
    map <int, int> mpb;
    while(n--){
        cin>>s;
        mp[s[0]]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second==1)continue;
        else{
            if(it->second%2==0){
                x=it->second/2;
                x--;
                a+=((x*(x+1))/2);
                b+=((x*(x+1))/2);
            }
            else{
                x=(it->second/2)+1;
                y=it->second/2;
                x--;y--;
                a+=((x*(x+1))/2);
                b+=((y*(y+1))/2);
            }
        }
    }
    cout<<a+b;
    return 0;
}
