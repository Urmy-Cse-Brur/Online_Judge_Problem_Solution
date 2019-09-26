#include <iostream>
using namespace std;
int main()
{
long long	int t, n, i, zero, a, b, one, j, x, f, y;
	cin>>t;
	while(t--){
		cin>>n>>a>>b;
		string s;
		cin>>s;
		unsigned long long ans=0; one=-1;
		for(i=0;i<n;i++){
			if(s[i]==49){
				one=i;break;
			}
		}
		if (one==-1){
		    ans+=((a*n)+(b*(n+1)));
		    cout<<ans<<endl;
		    continue;
		}
		else 
		    ans=(((one-1)*a)+(one*b)+(3*a)+(4*b));
		for(i=one;i<n-1;i++){
			if(s[i]==49){
				i++;
				zero=f=0;
				while(s[i]!=49 && i<n){
					if(s[i]==48){
						zero++;}
					else f=1;
					i++;
				}
				i--;
			}
			if(i==(n-1)) ans+=((2*a)+((zero-1)*a)+(zero*b));
	    	else if(zero==0)ans+=((2*b)+a);
			else if (zero==1)ans+=((4*b)+(2*a));
			else{
				x=(4*a)+((zero-2)*a)+a+((zero-1)*b)+(4*b);
				y=((zero+1)*a)+(2*(zero+1)*b);
				//cout<<x<<" "<<y<<endl;
				ans+=min(x,y);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
