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

const double pi = acos(-1.0);
#define ff first
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
    string s;
    while(getline(cin,s)){
        if(s[0]=='0')break;
        stringstream ss(s);
        int i=0, n, j, x, sum=1, p, c=0;
        while(ss>>n){
            if(i%2==0)x=n;
            else {
                p=1;
                for(j=1;j<=n;j++)p*=x;
                sum*=p;
            }
            i++;
        }
        sum--;n=sum;
        map <int,int> mp;
        map <int,int> :: reverse_iterator it;
        while(n%2==0){
            c++;n/=2;
        }
        if(c>0)mp[2]=c;
        for(i=3;i<=sqrt(n);i+=2){
            c=0;
            while(n%i==0){
                c++;
                n/=i;
            }
            if(c>0)mp[i]=c;
        }
        if(n>1)mp[n]=1; bool flag=false;
        for(it=mp.rbegin();it!=mp.rend();it++){
            if(flag)cout<<" ";
            cout<<it->ff<<" "<<it->ss;
            flag=true;
        }
        cout<<endl;
    }
    return 0;
}
