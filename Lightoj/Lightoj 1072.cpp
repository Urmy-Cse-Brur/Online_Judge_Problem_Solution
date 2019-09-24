#include <bits/stdc++.h>
using namespace std;
 
#define PI acos(-1)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long int
#define pb push_back
#define EPS 10e-10
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
 
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("in.txt", "r", stdin);
    freopen ("out.txt", "w", stdout);
    #endif
    double R, n, r, mid, first, last, theta, angle, ans;
    int t,c=0;
    cin>>t;
    while(t--){
        cin>>R>>n;
        theta=360.0/n;
        theta=(theta*PI)/180.0;
        first=0, last=R;
        while(true){
        mid=(first+last)/2.0;
        //cout<<mid<<endl;
        angle=mid/(R-mid);
        ans=(asin(angle))*2.0;
            if(fabs(ans-theta)<=EPS){
                r=mid;
                break;
            }
            else if(ans>theta)last=mid;
            else first=mid;
        }
        cout<<"Case "<<++c<<": "<<fixed<<setprecision(6)<<r<<endl;
    }
    return 0;
}
