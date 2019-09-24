    #include <iostream>
    #include <iomanip>
    #include <math.h>
     
    using namespace std;
     
    int main ()
    {
        double a,b,c,d, r, s, ans,p;
       
        int t, ca=0;
        cin >> t;
       
        while (t--){
            cin>>a>>b>>c>>d;
        p = sqrt (d);
        r = 1/d;
        s = sqrt (1+r);
       
            ans = (1 /s) * a;
            cout<<"Case "<<++ca<<": "; 
            cout<<fixed<<setprecision(6)<<ans<<endl;
        }
       
        return 0;
    }
