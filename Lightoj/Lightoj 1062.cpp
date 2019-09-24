#include <bits/stdc++.h>
using namespace std;
 
#define PI 3.1415926536
#define MOD 1000000007
#define ull unsigned long long
#define ll long long int
#define pb push_back
#define EPS 10e-7
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
 
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);
    #endif
    int t, c=1;
    double x, y, h, ans, mid, first, last, h1, h2, d=0;
    cin>>t;
    while(t--){
    cin>>x>>y>>h;
    first=0.0, last=min(x,y);
    while(true){
        //cout<<mid<<endl;
        mid=(first+last)/2.0;
        h1=sqrt((y*y)-(mid*mid));
        h2=sqrt((x*x)-(mid*mid));
        ans=(h1*h2)/(h1+h2);
        if(fabs(ans-h)<=EPS){
            d=mid;
            //cout<<d<<endl;
            break;
        }
        else if(ans>h)first=mid;
        else last=mid;
 
    }
    cout<<"Case "<<c++<<": "<<fixed<<setprecision(6)<<d<<endl;
}
    return 0;
}
