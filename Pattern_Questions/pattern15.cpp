#include<iostream>
using namespace std;

void pattern(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++)
			cout<<" ";
		for(int j=1;j<=2*i+1;j++)
			cout<<j;
		cout<<endl;
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<=i;j++)
			cout<<" ";
		for(int j=1;j<=(n-2*i)+2;j++)
			cout<<j;
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	cout<<endl;
	pattern(n);
	return 0;
}
