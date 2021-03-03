#include<iostream> 
#include<cstdlib>
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

void randomized(int arr[],int l, int h){
	int n = h-l+1;
	int x = rand() % n + l;
	swap(&arr[x],&arr[h]);
}

int partition(int arr[], int l, int h){
	int pivot = arr[h];
	int i=l-1, j=l;
	
	for(j=l; j<h; j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[h]);
	return i+1;
}

void QuickSort(int arr[],int l, int h){
	if(l<h){
		randomized(arr,l,h);
		int pivot = partition(arr, l ,h);
		QuickSort(arr, 0, pivot-1);
		QuickSort(arr, pivot+1, h);
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	QuickSort(arr, 0, n-1);
	display(arr,n);
	return 0;
}
