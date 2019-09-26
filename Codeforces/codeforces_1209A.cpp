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

 bool in[1000100];

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    int n, a[200], i, j, c=0;
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a, a+n);
    map <int, int> mp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(mp[j]==0){
                if(a[j]%a[i]==0)mp[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++){
        if(mp[i]==0) c++;
    }
    cout<<c;
    return 0;
}
