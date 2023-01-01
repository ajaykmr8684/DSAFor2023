#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
	a ^=b ^=a ^=b;
}


void reverseAnArray(vector<int> arr, int start, int end){

	if(start < end){
		swap(arr[start], arr[end]);
		reverseAnArray(arr, start +1, end - 1);
	}
}


int main(){
	int n;
	cin >> n;
	vector<int> arr(n);

	for(int i = 0; i< n; ++i){
		cin >> arr[i];
	}

	reverseAnArray(arr, 0, n-1);

	for(auto val : arr){
		cout << val << " ";
	}
}