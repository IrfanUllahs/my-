#include<iostream>
using namespace std;
int main(){
	int n=2,p;
	cout<<"Enter a number "<<endl;
	cin>>p;
	if(p==1 || p==0)
	cout<<" The number is Not prime "<<p<<endl;
	else
	{
		
	while(n<=p-1){
		if(p%n==0)
		{
			cout<<" The number is Not prime "<<p<<endl;
			break;
		}
		n++;
	}
	if(n==p)
		cout<<"the number "<<p<<" is prime "<<endl;
	}

	return 0;
}
