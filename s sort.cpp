#include<iostream>
using namespace std;
int main(){
	int n=6;
	int arr[n]={5,6,9,0,-1,2};
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[i])
			swap(arr[j],arr[i]);
		}
		cout<<arr[i]<<" ";
	}
	/*int j=0,i=0;
	for(i=0; i<n-1; i++){
		for( j=0; j<n-(i-1); j++){	
		if(arr[j]>arr[j+1])	
		{	
		swap(arr[j],arr[j+1]);
		cout<<arr[j]<<" ";
		}
		}
	//cout<<arr[j]<<" ";
	}*/
	return 0;
}
