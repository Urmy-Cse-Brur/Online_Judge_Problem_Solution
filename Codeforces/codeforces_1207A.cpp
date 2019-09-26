#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t, b, p, f, h, c, need;
	cin>>t;
	while(t--){
		int ans=0;
		cin>>b>>p>>f>>h>>c;
		need=b/2;
		if(c>=h){
			if(need>=f){
				need-=f; ans=f*c;
			}else{
				ans=need*c;
				need=0;
			}
			if(need>=p)ans+=(p*h);
			else ans+=(need*h);
		}
		else{
			if(need>=p){
				need-=p; ans=p*h;
			}else{
				ans=need*h;
				need=0;
			}
			if(need>=f)ans+=(f*c);
			else ans+=(need*c);
		}
		cout<<ans<<endl;
	}
}
