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
    int n, i, x;
    cin>>n;
   
    int mx = 0, tx = 0;
    char ch;
    for(i=0;i<n;i++){
        cin>>ch>>x;
        if(ch=='-'){
            if(!in[x]) 
                mx++;
            else 
                tx--;
             in[x]=false;
        }
        else{
            tx++;
            mx=max(mx, tx);
            in[x]=true;
        }
    }
    cout<<mx;
    return 0;
}
