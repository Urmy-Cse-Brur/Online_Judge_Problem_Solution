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

#define N 10000001
bool a[N];
vi v;

void sieve (){
     int i, j, s;
     int n=N;
     a[1]=a[0]=true;
     s=sqrt(n);
     for (i=2;i<=s;i++){
        if (a[i]==false){
            for (j=i*i;j<=n;j+=i) a[j]=true;
        }
    }
    for(i=0;i<=n;i++){
        if(a[i]==0)v.pb(i);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
     #endif
    sieve();
    int n, t, x, y, i, j, c, cnt=0;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        c=0;
        for(i=0; ;i++){
            x=v[i];
            y=n-v[i];
            if(x>y)break;
            if(a[y]==0)c++;
        }
        printf("Case %d: %d\n", ++cnt, c);
    }
    return 0;
}
