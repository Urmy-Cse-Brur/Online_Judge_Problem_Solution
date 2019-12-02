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
    int q, r, a, b, x1, x2, y1, y2, x, y, gcd;
    while(cin>>a>>b){
        x1=1, x2=0, y1=0, y2=1;
        while(true){
            r=(a%b);
            q=a/b;a=b;b=r;
            x=x1-(q*x2);
            y=y1-(q*y2);
            x1=x2;x2=x;
            y1=y2;y2=y;
            gcd=a;
            if(r==0)break;
        }
        cout<<x1<<" "<<y1<<" "<<gcd<<endl;
    }
    return 0;
}
