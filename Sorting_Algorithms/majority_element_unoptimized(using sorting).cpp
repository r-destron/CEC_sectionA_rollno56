#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
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

int majorityElement(int arr[], int n){
    int count=1;
    for(int i=0;i<n-1;i++){
		if(arr[i]==arr[i+1])
            count++;
        else 
            count=1;
        if(count>n/2)
            return arr[i];
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	SelectionSort(arr,n);
    cout<<endl<<majorityElement(arr,n);
}