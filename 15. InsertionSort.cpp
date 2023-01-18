#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
	int temp = b;
	b = a;
	a = temp;
}

void insertionSort(vector<int> &arr){

	for(int i = 1; i < arr.size(); ++i) {
		int j = i;
		while(j > 0 && arr[j] < arr[j-1]) {
			swap(arr[j], arr[j-1]);
			j--;
		}
	}

	for(auto val: arr) {
		cout << val << " ";
	}


}


int main(){

	vector<int> arr = {9, 8, 7, 2, 1};
	insertionSort(arr);

}