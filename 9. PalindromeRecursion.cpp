#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string word, int start, int end){

	if(start == end){
		return true;
	}

	if(word[start] != word[end]){
		return false;
	}

	checkPalindrome(word, start+1, end-1);

}


int main(){

	string word = "TAKE U FORWARD";
	int n = word.length();

	bool ans = checkPalindrome(word, 0, n-1);

	if(ans){
		cout << "Yes, It's a palindrome";
	}
	else{
		cout << "Nope! It's not.";
	} 
}