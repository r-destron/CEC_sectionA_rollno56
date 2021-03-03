#include<iostream>
#include<unordered_map>

using namespace std;

void majorityElement(int arr[],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
        m[arr[i]]++;

    for(auto x : m){
        if(x.second > n/2){
            cout<<x.first<<endl;
            return;
        }
    }
    cout<<"No majority element";
}

int main(){
    int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	majorityElement(arr,n);
}