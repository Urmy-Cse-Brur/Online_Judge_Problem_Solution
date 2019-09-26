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
    long long int n, i, c=1, zero, j, f=0;
    cin>>n;
    long long int a[n+1];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++){
        zero=0;
        if(a[i]==1){
           f=1;
           i++;
           while(a[i]!=1 && i<n){
                zero++;i++;
           }
            if(zero>0 && a[i]==1) c*=(zero+1);
            i--;
            if(i<0)break;

        }
    }

    if(f!=1)c--;
    cout<<c<<endl;
    return 0;
}
