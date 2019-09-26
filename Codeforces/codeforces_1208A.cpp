#include <iostream>
using namespace std;
int main()
{
	int c, a, b, n, t;
	cin>>t; 
	for(int i=1;i<=t;i++){
		cin>>a>>b>>n;
		if(n==0)cout<<a<<endl;
		else if(n==1)cout<<b<<endl;
		else{
			n--;
			n%=3;
			if(n==2)cout<<a<<endl;
			else if(n==0)cout<<b<<endl;
			else{
				c=a^b;
				cout<<c<<endl;
			}
		}
	}
   
	return 0;
}
