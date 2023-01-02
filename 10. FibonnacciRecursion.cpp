#include <bits/stdc++.h>
using namespace std;

int printFibonnaci(int n){

	 if(n == 0 || n == 1){
	 	return n;
	 }
	 else{
	 	return printFibonnaci(n-1) + printFibonnaci(n-2); 
	 }


}


int main(){

	int n;
	cin >> n;

	for(int i = 0; i< n; ++i){
		cout << printFibonnaci(i) << " ";
	}


}