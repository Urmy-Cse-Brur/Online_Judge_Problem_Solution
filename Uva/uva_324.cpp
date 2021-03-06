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
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);
    #endif
    int n, i, j, k, c, x;
    ll mult, carry;
    while(cin>>n){
        if(n==0)break;
        int res[100010];
        res[0]=1; k=1;
        for(i=2;i<=n;i++){
            carry=0;
            for(j=0;j<k;j++){
                mult=(i*res[j])+carry;
                res[j]=mult%10;
                carry=mult/10;
            }
            while(carry!=0){
                res[k]=carry%10;
                k++;
                carry/=10;
            }
        }
        cout<<n<<"!"<<" --"<<endl;
        map <int, int> mp;
        map <int, int> :: iterator it;
        for(i=k-1;i>=0;i--)mp[res[i]]++;
        for(i=0;i<=9;i++){
            c=0; x=mp[i];
            if(x==0)c++;
            while(x>0){
                x/=10;c++;
            }
            cout<<"    ("<<i<<")";
            for(j=0;j<5-c;j++)cout<<" ";
            cout<<mp[i];
            if(i==4)cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
