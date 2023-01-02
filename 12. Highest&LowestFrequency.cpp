#include <bits/stdc++.h>
using namespace std;


void countFrequency(vector<int> arr){

	int maxi = INT_MIN;
	int mini = INT_MAX;
	int highest, lowest = 0;
	unordered_map<int, int> umap;

	for(auto val : arr){
		umap[val]++;
	}

	//print values in umap

	for(auto val: umap){
		if(maxi < val.second){
			highest = val.first;
			maxi = val.second;
		}

		if(mini > val.second) {
			lowest = val.first;
			mini = val.second;
		}
	}

	cout << "Highest frequent number is " << highest << " and lowest is " << lowest;
}


int main(){

	int n;
	cin >> n;

	vector<int> arr(n);

	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}

	countFrequency(arr);

}