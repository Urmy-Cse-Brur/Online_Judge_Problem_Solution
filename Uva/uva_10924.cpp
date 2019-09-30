#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	int i, s, f, sum;
	string str;
	while (cin>>str){
		sum=f=0;
		for(i=0;i<str.size();i++){
			if (str[i]>='a'&&str[i]<='z'){
			sum+=str[i]-96;
			//cout<<str[i]-96<<endl;
			}
			else if (str[i]>='A'&&str[i]<='Z'){
			sum+=str[i]-38;
			//cout<<str[i]-38<<endl;
			}
		}
		s=sqrt(sum);
		for(i=2; i<=s;i++){
			if (sum%i==0){
				f=1;
				break;
			}
		}
		
		if (f==0 || sum == 2){
		cout<<"It is a prime word." << endl;}
		else{
		cout<<"It is not a prime word." << endl;}
	}
	return 0;
}
