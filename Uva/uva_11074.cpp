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
    int s, n, t, x, i, j, p, k, y, cnt=0;
    while(cin>>s>>t>>n){
        if(s==0 && t==0 && n==0)break;
        cout<<"Case "<<++cnt<<":"<<endl;
        x=(n-1)+2;
        p=(x*t)+(n*s);
        for(i=1;i<=n;i++){
            for(j=0;j<t;j++){
                for(k=0;k<p;k++)cout<<"*";
                cout<<endl;
            }
            for(y=0;y<s;y++){
                for(j=0;j<n;j++){
                    for(k=0;k<t;k++)cout<<"*";
                    for(k=0;k<s;k++)cout<<".";
                }
                for(k=0;k<t;k++)cout<<"*";
                cout<<endl;
            }
        }
        for(j=0;j<t;j++){
            for(k=0;k<p;k++)cout<<"*";
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
