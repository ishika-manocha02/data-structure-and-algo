#include<iostream>
using namespace std;
void binary(int arr[],int n,int key){
	int start=0;
	int last=n-1;
	int mid=start+(last-start)/2;
	int flag=0;
	while(start<=last){
		if(arr[mid]==key){
			cout<<mid<<endl;
			last=mid-1;
			 flag=1;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
		else if(arr[mid]>key){
			last=mid-1;
		}
		mid=start+(last-start)/2;
	}
		if(flag==1){
			cout<<"number found";
		}
		else{
			cout<<"not found";
		}
}
int main(){
	int arr[5]={1,2,5,5,5};
	binary(arr,5,5);
}
