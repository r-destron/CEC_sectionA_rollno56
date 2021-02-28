#include<iostream>
using namespace std;

void display(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

void InsertionSort(int arr[],int n){
	int i,j,temp;
	for(i=1 ; i<n; i++){
		temp=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	InsertionSort(arr,n);
	display(arr,n);
	return 0;
}
