#include <bits/stdc++.h>
using namespace std;


void countFrequency(vector<int> arr){

	unordered_map<int, int> umap;

	for(auto val : arr){
		umap[val]++;
	}

	//print values in umap

	for(auto val: umap){
		cout << val.first << ":" << val.second << "\n";
	}



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