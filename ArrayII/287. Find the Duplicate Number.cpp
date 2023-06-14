#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int i=0;
	while(i<=n){
		if(arr[i]!=i+1){
			int j=arr[i]-1;
			if(arr[i]!=arr[j]){
				swap(arr[i],arr[j]);
			}
			else{
				return arr[i];
			}
		}
		else{
			i++;
		}
	}
	return -1;
}
