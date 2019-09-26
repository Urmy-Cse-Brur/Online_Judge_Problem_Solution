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
    int n, k, i, c;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0) cout<<s<<endl,exit(0);
    else if(s.sz==1 && k>=1 || s[0]=='0')s[0]='0';
    else if(s[0]=='1'){
        for(i=1;i<s.sz;i++){
            if(k==0) break;
            if(s[i]!='0'){
                k--;
                s[i]='0';
            }
        }
    }
    else{
        s[0]='1';k--;
        for(i=1;i<s.sz;i++){
            if(k==0) break;
            if(s[i]!='0'){
                k--;
                s[i]='0';
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
