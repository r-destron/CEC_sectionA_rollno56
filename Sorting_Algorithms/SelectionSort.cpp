#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void display(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

void SelectionSort(int arr[],int n){
	int pos,i,j;
	for(i=0 ; i<n ; i++){
		pos=i;
		for(j=i+1;j<n;j++)
			if(arr[j] < arr[pos])
				pos = j;
		
		swap(&arr[i] , &arr[pos]);
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	SelectionSort(arr,n);
	display(arr,n);
	return 0;
}
