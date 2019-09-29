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
  //  freopen ("in.txt", "r", stdin);
  //  freopen ("out.txt", "w", stdout);
    #endif
    int a, b, n, k, c, q, ans;
    cin>>q;
    while(q--){
        int a[200010], i, odd=0;
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0)odd++;
        }
        int p=k-1;
        ans=odd-p;
      // cout<<odd-p<<endl;
        if(odd<k)cout<<"NO"<<endl;
        else if(ans%2==0)cout<<"NO"<<endl;
        else if (k==1&&odd%2==0)cout<<"NO"<<endl;
        else{

                cout<<"YES"<<endl;
        if(k==1) {cout<<n<<endl;
        continue;}
            vi v; int c=0;
            for(i=0;i<n;i++){
                if(a[i]%2!=0){
                    v.pb(i+1);
                    c++;
                }
                if(c==k-1){
                        v.pb(n);
                        break;
                }
            }
            for(i=0;i<v.sz;i++)cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
