#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, i, c, x;
	cin>>n;
	if(n%2==0)cout<<"NO"<<endl;
	else {
		vector <int> v1, v2;
		for(i=1,c=1;i<=n;i++){
			if(i%2==0){
				v2.push_back(c);
				c++;
				v1.push_back(c);
				c++;
			}
			else{
				v1.push_back(c);
				c++;
				v2.push_back(c);
				c++;
			}
		}
		for(i=0;i<v2.size();i++)v1.push_back(v2[i]);
		cout<<"YES"<<endl;
		for(i=0;i<v1.size();i++)cout<<v1[i]<<" ";
		cout<<endl;
	}
}
