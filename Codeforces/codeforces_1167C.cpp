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
int rankParent[MAX];
int parent[MAX];

void initialize(int x){
    for(int i=1;i<=x;i++){
        parent[i]=i;
        rankParent[i]=1;
    }
}
int findParent(int x){
    if(x!=parent[x])
        return parent[x]=findParent(parent[x]);
    else
        return x;
}
void unionSet(int x, int y){
    int px=findParent(x);
    int py=findParent(y);

    if(px==py) return;
    if(rankParent[px]<rankParent[py])
        parent[px]=parent[py];
    else if(rankParent[px]>rankParent[py])
        parent[py]=parent[px];
    else{
        parent[py]=px;
        rankParent[px]++;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    #endif
    int n, m, f, r, d, i, x, y;
    cin>>n>>m;
    initialize(n);
    for(i=0;i<m;i++){
        f=-1;
        cin>>d;
        while(d--){
            cin>>x;
            if(f==-1){
            f=x;
            continue;
            }
            unionSet(f,x);
        }
    }
    map<int,int> mp;
    for (i=1;i<=n;i++){
        y=findParent(i);
        parent[i]=y;
        mp[parent[i]]++;
    }
    for (i=1;i<=n;i++){
      cout<<mp[parent[i]]<<" ";
    }
    return 0;
}
