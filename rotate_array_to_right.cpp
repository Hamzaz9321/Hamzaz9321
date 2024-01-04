// My first DSA Question
//To rotate an array to right K times 
#include<iostream>
using namespace std;

int main(){
	int arr[7]={1,2,3,4,5,6,7};
	int k=3;
	int temp;
	
	for(int x=0;x<k;x++){
		
		temp=arr[6];
		for(int i=6;i>0;i--){
			arr[i]=arr[i-1];
		}
		arr[0]=temp;
		
		for(int j=0;j<7;j++){
			cout<<arr[j]<<" ";
		}
	cout<<endl;	
	}
	return 0;
}
