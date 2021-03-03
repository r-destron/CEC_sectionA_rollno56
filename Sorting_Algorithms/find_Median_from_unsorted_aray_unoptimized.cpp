//unoptimized 
#include<iostream> 
#include<cstdlib>

using namespace std;

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

float SelectionSort(int arr[],int n){
	int pos,i,j;
	for(i=0 ; i<n ; i++){
		pos=i;
		for(j=i+1;j<n;j++)
			if(arr[j] < arr[pos])
				pos = j;
		
		swap(&arr[i] , &arr[pos]);
	}
    if(n%2==0)
        return (arr[n/2-1]+arr[n/2])/2.0;
    else 
        return arr[n/2];
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	float median = SelectionSort(arr, n);
	cout<<endl<<median<<endl;
	return 0;
}