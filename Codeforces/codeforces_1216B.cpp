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
        int n, i, j;
        ull sum=0;
        cin>>n;
        int a[n+1];
        vi v[1100];
        set <int> s;
         set <int> :: iterator it;
        for(i=0;i<n;i++) {
            cin>>a[i];
            v[a[i]].pb(i);
            
        }
        sort(a, a+n);
        for(i=n-1, j=0;i>=0;i--,j++){
            sum+=((a[i]*j)+1);
            s.insert(a[i]);
        }
        cout<<sum<<endl;
        vi vs;
        for(it=s.begin();it!=s.end();it++) vs.pb(*it);
        for(i=vs.sz-1;i>=0;i--){
            for(j=0;j<v[vs[i]].sz;j++) cout<<v[vs[i]][j]+1<<" ";
        }
        return 0;
    }
