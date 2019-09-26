#include <iostream>
using namespace std;
int main()
{
	string s;
	int i, ans, c=0;
	cin>>s;
	ans=(s.size()-1)/2;
	for(i=0;i<s.size();i++){
		if(s[i]==48)c++;
	}
	ans++;
	if(c==s.size()-1 && (s.size()-1)%2==0)ans--;
	if(s.size()==1)ans=0;
	cout<<ans;
}
