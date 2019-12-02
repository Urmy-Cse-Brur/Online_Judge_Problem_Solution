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
    int t;
    cin>>t;
    while(t--){
        int a, n, b, i, m, ans, c;
        cin>>a>>n;m=n;
        if(n%a!=0) cout<<"NO SOLUTION"<<endl;
        else if(a==1) cout<<n<<endl;
        else{
            map <int,int> ma, mlcm;
            map <int,int> :: iterator it;
            for(i=2;i<=sqrt(a);i++){
                c=0;
                while(a%i==0){
                    c++;
                    a/=i;
                }
                if(c>0)ma[i]=c;
            }
            if(a>1)ma[a]=1;
            for(i=2;i<=sqrt(m);i++){
                c=0;
                while(m%i==0){
                    c++;
                    m/=i;
                }
                if(c>0)mlcm[i]=c;
            }
            if(m>1)mlcm[m]=1; ans=1;
            for(it=mlcm.begin();it!=mlcm.end();it++){
                if(ma[it->ff]==it->ss){
                    for(i=1;i<=it->ss;i++)ans*=it->ff;
                }
            }
            cout<<n/ans<<endl;
        }
    }
    return 0;
}
