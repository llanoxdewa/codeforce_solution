#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

// debugging
// #include "debug.h"

// shorcut data type
#define ll long long
#define ull unsigned long long

bool isprime(int bil){
	for(int i = 2;i <= bil;i++){
		if(bil % i == 0 && i != bil){
			return 0;
		}
	}
	return 1;
}


void solve(){
	int n;
	cin >> n;
	cout << n / 2 << endl;
	if(n%2==0){
		for(int i = 0;i < n/2 - 1;i++){
			cout << 2 << " ";
		}
		cout << 2 << endl;
		return;
	}
	for(int i = 0;i < n/2 - 1;i++)
		cout << 2 << " ";
	cout << 3 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("dbg.txt","w",stderr);
   	#endif
	solve();
	return 0;
}
