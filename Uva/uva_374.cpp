#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	unsigned long long  b, p, m, ans;
	
	while(cin>>b>>p>>m){
		ans = 1;
		b=(b%m);
		while (p>0){
			if(p & 1)
			ans=(ans*b) % m;
			
			p=p>>1;
			b=(b*b) % m;
		}
		
		cout<< ans<< endl;
	}
	return 0;
}
