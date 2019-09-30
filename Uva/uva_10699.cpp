#include <iostream>
#include <set>

using namespace std;

int main ()
{
	int n, i, j, m, sum;
	while(cin>>n){
		if (!n)
		break;
		m = n;
		sum = 0;
		set <int> s;
		if (n%2){
			while (n%2==0){
				s.insert(2);
				n=n/2;
				sum+=2;
			}
		}
		if (sum!=m){
		for(i=3;i<=n;i+=2){
			while (n%i==0){
				s.insert(i);
				n=n/i;
			}
		   }
		}
		
		if (n!=1)
		s.insert(n);
		
		cout <<m<<" : "<< s.size()<<endl;
	}
	return 0;
}
