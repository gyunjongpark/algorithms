#include<iostream>
using namespace  std;

int ret,temp,n,m,j,r,l=1;
int main(){
	cin>>n>>m>>j;
		
	while(j--){
		r=l+m-1;
		
		cin>>temp;
    
		if(l<=temp && temp<=r) continue;
		else{
			if(temp<l){
				ret+=(l-temp);
				l=temp;
			}
			else{
				ret+=(temp-r);
				l+=(temp-r);
			}
		}
	}
  
	cout<<ret;
  
	return 0;
}
