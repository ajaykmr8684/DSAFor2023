#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
	int temp = b;
	b = a;
	a = temp;
}

void bubbleSort(vector<int> &arr){

	/*

	Step-1: Start two consecutive pointers (i and i +1)
	Step-2: Now if the first is greater than second one, swap otherwise don't.
	Step-3: Automatically the larger one will flow back to the top (at the end)
	Step-4: Repeat the process until the array is fully sorted 

	*/

	for(int i = 0; i < arr.size() - 1; ++i) {

		for(int j = 0; j < arr.size() - i - 1; ++j) {

			if(arr[j] > arr[j + 1]) {

				swap(arr[j], arr[j + 1]);

			}

		}

	}


	for(auto val : arr) {

		cout << val << " ";
	}

}


int main(){

	vector<int> arr = {3, 1, 2, 5, 4};
	bubbleSort(arr);

}