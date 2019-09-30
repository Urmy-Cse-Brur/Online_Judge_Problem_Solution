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

#define N 1000000
int arr[N+1];
int a[N+1];
void sieve (){
     int i, j, s, x = 0;
     int n=N;
     a[1]=a[0]=1;
     s=sqrt(N);
     for (i=2;i<=s;i++){
        if (a[i]==0){
            for (j=i*i;j<=N;j+=i) a[j]=1;
        }
     }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    #endif
    sieve();
    int n, i, j, c, s, t;
    for(i=2;i<=N;i++){
        c=0;
        s=i;
        if(a[s]==0)arr[s]=1;
        else{
            for(j=2;j<=sqrt(s);j++){
                while(s%j==0){
                    s/=j;
                    c++;
                }
            }
            if(s!=1)c++;
            arr[i]=c;
        }
    }
    for(i=2;i<=N;i++)arr[i]+=arr[i-1];
    while(cin>>n) cout<<arr[n]<<endl;
    return 0;
}
