#include <iostream>
using namespace std;

int a[150005];

int main (){
    int n, q, i, c, x;
  cin>>q;
  while(q--){
  	cin>>n;
  
  	c=0;
  	for(i=0;i<n;i++)cin>>a[i];
  	if(n==1){
  		cout<<"0"<<endl;
  		continue;
  	}
  	x=a[n-1];
  	for(i=n-2;i>=0;i--){
  		if(a[i]>x)c++;
  		else x=a[i];
  	}
  	cout<<c<<endl;
  }
    return 0;
}
