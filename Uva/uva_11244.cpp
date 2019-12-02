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
   // freopen ("in.txt", "r", stdin);
  //  freopen ("out.txt", "w", stdout);
    #endif
    int r, c, i, j, cnt, k, x, f, y;
    while(cin>>r>>c){
        if(r==0 && c==0)break;
        cnt=0;
        char s[200][200];
        for(i=0;i<r;i++)cin>>s[i];
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                f=0;
                if(s[i][j]=='*'){
                    for(k=0;k<8;k++){
                        x=i+dx8[k];
                        y=j+dy8[k];
                        if(x>=0 && x<r && y>=0 && y<c){
                            if(s[x][y]=='*'){
                                f=1;break;
                            }
                        }
                    }
                    if(f==0)cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
