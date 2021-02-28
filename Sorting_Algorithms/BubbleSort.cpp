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

void BubbleSort(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){										
		for(j=1;j<n-i;j++){
			if(arr[j] < arr[j-1])
				swap(&arr[j-1],&arr[j]);
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	BubbleSort(arr,n);
	display(arr,n);
	return 0;
}
