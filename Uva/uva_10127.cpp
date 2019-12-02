#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	int n, c;
	unsigned long long p;
	while(cin>>n){
		c=1;
		p=1%n;
		while (p!=0){
			p=(p*10) + 1;
			p=p%n;
			c++;
		}
		cout << c << endl;
		
	}
	return 0;
}
