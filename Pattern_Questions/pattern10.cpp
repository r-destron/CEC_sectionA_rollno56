#include<iostream>
using namespace std;

void pattern(int n){
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++)
			cout<<" ";
		for(int j=1;j<=i;j++)
			cout<<j;
		for(int j=i-1;j>0;j--)
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
