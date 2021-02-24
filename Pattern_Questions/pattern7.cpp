#include<iostream>
using namespace std;

void pattern(int n){
	for(int i=0;i<n;i++){
		for(int j=i;j>0;j--)
			cout<<" ";
		for(int j=i;j<n;j++)
			cout<<"*";
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
