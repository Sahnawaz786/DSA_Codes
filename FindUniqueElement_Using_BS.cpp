#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	vector<int> arr {1,1,3,3,8,8,10,12,12,15,15,18,18,20,20,21,21};
	
	int low=0;
	int high = arr.size()-1;
	int ans = 0;
	
	while(low<=high){
		int mid = (low+high)/2;
		if(mid%2==0){
			if(arr[mid] == arr[mid+1]){
				low=mid+1;
			}
			else if(arr[mid] == arr[mid-1]){
				high=mid-1;
			}
			else{
				ans=arr[mid];
				break;
			}
		}
		else{
			if(arr[mid] == arr[mid-1]) {
				low=mid+1;
			}
			else if(arr[mid] == arr[mid+1]){
				high=mid-1;
			}
		}
	}
	
	cout<<"The Unique Element is "<<ans<<endl;
	
	return 0;
}
