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
    ll b, p, ans, s, q, z, sum, i, n;
    int f;
    while(cin>>p){
        if(p==0)break;
        b=2;f=0;ans=1;
        n=p;
        while (p>0){
            if(p & 1)
            ans=(ans*b);
            p=p>>1;
            b=(b*b);
        }
        s=sqrt(n);
        for(i=2;i<=s;i++){
            if(n%i==0){
                f=1;break;
            }
        }

        if(f==0){
            f=0;
            z=ans-1;
            s=sqrt(z);
            for(i=2;i<=s;i++){
                if(z%i==0){
                    f=1;break;
                }
            }
            sum=(ans/2)*z;
            else cout<<"Given number is prime. But, NO perfect number is available."<<endl;
        }
        else cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
    }
    return 0;
}
