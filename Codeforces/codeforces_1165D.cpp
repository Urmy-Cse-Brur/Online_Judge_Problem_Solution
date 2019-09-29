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
int a[1000001];
#define N 10

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    #endif
    long long int n, x, y, i, c=1, a[310], ans=0, t, j;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1;i<=n;i++)cin>>a[i];
        set <int> s;
        sort(a+1,a+n+1);
        set<int> :: iterator it;
            if(n%2==0){
               j=n;
                i=1;
                x=n/2;
                while(i<=x){
                    y=a[i]*a[j];
                    s.insert(y);
                    i++;
                    j--;
                }
            }
            else{
                j=n;
                i=1;
                x=n/2;
                while(i<=x){
                    y=a[i]*a[j];
                    s.insert(y);
                    i++;
                    j--;
                }
                s.insert(a[x+1]*a[x+1]);
            }
            if(s.size()==1){
                set<int> p;
                int f=0, s;x=a[n]*a[1];
                s=sqrt(x);
                for(i=2;i<=s;i++){
                    if(x%i==0){
                        p.insert(x/i);
                        p.insert(i);
                    }
                }
                if(p.size()==n)cout<<x<<endl;
                else cout<<"-1"<<endl;
            }
            else cout<<"-1"<<endl;
    }
    return 0;
}
