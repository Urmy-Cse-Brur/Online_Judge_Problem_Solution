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
        int n, i, c=0;
        string s;
        cin>>n>>s;
        for(i=0;i<n-1;i+=2){
            if(s[i]=='a' && s[i+1]=='b'|| s[i]=='a' && s[i+1]=='b') continue;
            else if(s[i]=='a' && s[i+1]=='a'){
                s[i+1]='b';
                c++;
            }
            else if(s[i]=='b' && s[i+1]=='b'){
                s[i+1]='a';
                c++;
            }
        }
        cout<<c<<endl;
        cout<<s<<endl;
        return 0;
    }
