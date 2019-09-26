#include <iostream>
using namespace std;

int main (){
    unsigned long long int n, m, q, i,ans, r, s, j, count, repeat, sum;
  cin>>q;
  while(q--){
  	cin>>n>>m;
  	if(n<m){
  		cout<<"0"<<endl;
  		continue;
  	}
  	sum=repeat=ans=0;
      count=n/m;
      for(i=m;i<=n;i+=m){
      	sum+=(i%10);
      	repeat++;
      	if(i%10==0){
      		break;}
      }
      s=count/repeat;
      r=count%repeat;
      for(i=1,j=m;i<=r;i++,j+=m){
      	ans+=(j%10);
      }
      ans+=(s*sum);
  	cout<<ans<<endl;
  }
    return 0;
}
