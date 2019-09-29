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
#define PI acos(-1.0)
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
    int n, c=0, k, o=0, z=0, i;
    string s;
    cin>>n>>s;
    if (n%2 !=0)
        cout<<"1"<<endl<<s<<endl;
    else {
        for (i=0;i<s.sz;i++){
            if(s[i]==48)z++;
            else o++;
        }
        if (o!=z)  cout<<"1"<<endl<<s<<endl;
        else {
             cout<<"2"<<endl;
            cout<<s[0]<< " ";
            for (i=1;i<s.sz;i++)cout<<s[i];
        } 
    }
    return 0;
}
