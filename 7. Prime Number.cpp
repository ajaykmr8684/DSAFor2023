/*Prime Number*/



#include <bits/stdc++.h>
using namespace std;


int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);


int n;
cin >> n;

bool isPrime = false;


for(int i = 2; i <= sqrt(n); ++i)
{
	if(n % i == 0){
		isPrime = true;
		break;
	}
	
}

if(isPrime)
{
	cout << "Not a Prime";
}
else
{
	cout << "Prime";
}


}