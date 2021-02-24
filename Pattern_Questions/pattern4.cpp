#include<iostream>
using namespace std;

void pattern(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++)
			cout<<" ";
		for(int j=i+1;j>=1;j--)
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
