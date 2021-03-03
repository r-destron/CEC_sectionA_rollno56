//optimized 
#include<iostream> 
#include<cstdlib>

using namespace std;

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
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

int returnPivot(int arr[],int l, int h, int choice){
	if(l<h){
		if(choice == 1)		randomized(arr,l,h);
		if(choice == 0) 	swap( &arr[l], &arr[h]);
			//choice =1 means random pivot, 1 means l as pivot, anything else means h as pivot
		return partition(arr, l ,h);
	}
}

float findMedian(int arr[],int l,int h){
	int n=h-l+1;
	while(1){
		int pivot = returnPivot(arr,l,h,1);
		if(n%2==1 && pivot == n/2){
			return arr[pivot];
		}
		else if(n%2==0){
			if(pivot == n/2-1){
				int pivotNext=returnPivot(arr,pivot+1,h,0);
				return (arr[pivot]+arr[pivotNext])/2.0;
			}
			if(pivot == n/2){
				int pivotPrevious=returnPivot(arr,l,pivot-1,2);
				return (arr[pivot]+arr[pivotPrevious])/2.0;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	float median = findMedian(arr, 0, n-1);
	cout<<endl<<median<<endl;
	return 0;
}


/*another method 
//array size odd
    if (n % 2 == 1) {
        nth_element(arr.begin(), arr.begin() + n / 2, arr.end());
        cout << "Median is: " << arr[n / 2] << endl;
    }
    else { 
        nth_element(arr.begin(), arr.begin() + n / 2, arr.end());
        int a = arr[n / 2];
        
        nth_element(arr.begin(), arr.begin() + n / 2 - 1, arr.end());
        int b = arr[n / 2 - 1];

        cout << "Median is: " << (a + b) / 2.0 << endl;
    }*/