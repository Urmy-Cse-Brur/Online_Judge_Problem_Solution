#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	int i, s, f, g, sum, n, m,p, x;
	string str;
	while (cin>>n){
		f = g = 0;
		s = sqrt (n);
		for(i=2;i<=s;i++){
			if (n%i==0){
				f=1;
				break;
			}
		}
		
		if (f==0 || n==2){
			m=n;
			int r;
			x=0;
			while (m!=0){
				r=m%10;
				x=(x*10)+r;
				m=m/10;
			}
		
			p=sqrt(x);
			for(i=2;i<=p;i++){
				if(x%i==0){
					g=1;
					break;
				}
			}
			if (g==0||x==2){
				if(n==x)
				cout<<n<<" is prime."<<endl;
				else
				cout<<n<<" is emirp."<<endl;
			}
			else
			cout<<n<<" is prime."<<endl;
		}
		else
		cout<<n<<" is not prime."<<endl;
	}
	return 0;
}
