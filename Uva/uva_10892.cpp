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
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    int n, ans, c, i, m;
    while(cin>>n){
        if(n==0) break;
        m=n;
        ans=1;c=0;
        while(n%2==0){
            c++;
            n/=2;
        }
        if(c>0) ans*=(((c+1)*(c+1))-(c*c));
        for(i=3;i<=sqrt(n);i+=2){
            c=0;
            while(n%i==0){
                c++;
                n/=i;
            }
            if(c>0) ans*=(((c+1)*(c+1))-(c*c));
        }
        if(n>1)ans*=3;
        cout<<m<<" "<<(ans+1)/2<<endl;
    }
    return 0;
}
