#include <bits/stdc++.h>
using namespace std;


void selectionSort(vector<int> &arr){

	/*Step1
	find the minimum  element */

	/* Step 2
	Swap the minimum element with the first element of the array*/

	for(int i = 0; i < arr.size()-1; ++i){

		//find the minimum
		int mini = i;
		for(int j = i+1; j < arr.size(); ++j){
			if(arr[j] < arr[mini]){
				mini = j;
			}
		}

		int temp = arr[mini];
    	arr[mini] = arr[i];
    	arr[i] = temp;

	}

	//print sorted array

	for(auto val: arr){
		cout << val << " ";
	}

}


int main(){

	vector<int> arr = {1,3,5,4,2};

	selectionSort(arr);


}
