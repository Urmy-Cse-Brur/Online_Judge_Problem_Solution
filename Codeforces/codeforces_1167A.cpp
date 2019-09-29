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
    int t, n, i, f, c;
    cin>>t;string s, r;
    while(t--){
        cin>>n>>s;c=0;f=-1;
        //bstrcpy(r,s);
        int l=s.size();
        if(n<11)cout<<"NO"<<endl;
        else{
            for(i=0;i<s.size();i++){
                if(s[i]=='8'){
                    f=i;break;
                }
            }
            if(n-f>=11 && f>=0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
