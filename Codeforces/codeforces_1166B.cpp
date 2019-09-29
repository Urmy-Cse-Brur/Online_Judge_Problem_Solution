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
#define EPS 1e-14
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
   // freopen ("out.txt", "w", stdout);
    #endif
    int n, i, r, c, j, p, cnt=0, x, f=0;
    cin>>n;
    x=sqrt(n);

    for(i=5;i<=x;i++){
        if(n%i==0){
            r=i;
            c=n/i;
            f=1;
            break;
        }
    }
  //  cout<<r<<" "<<c<<endl;
    if(f==0)cout<<"-1";
    else{
          p=r-5;
        string s1="aeiou";
        string s2="euoia";
        string s3="iaeuo";
        string s4="oiuae";
        string s5="uoaei";
        for(i=1;i<=5;i++,cnt++){
            if(cnt==c) break;
           if(i==1)cout<<s1;
           if(i==2)cout<<s2;
           if(i==3)cout<<s3;
           if(i==4)cout<<s4;
           if(i==5)cout<<s5;
           if(i==1){
               for(j=0;j<p;j++) cout<<s1[j];
            }
           if(i==2){
            for(j=0;j<p;j++) cout<<s2[j];
           }
           if(i==3){
            for(j=0;j<p;j++) cout<<s3[j];
           }
           if(i==4){
            for(j=0;j<p;j++) cout<<s4[j];
           }
           if(i==5){
            for(j=0;j<p;j++) cout<<s5[j];
           }
           if(i==5)i=0;
        }
    }
    return 0;
}
