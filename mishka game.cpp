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


void solve(){
	int n;
	cin >> n;
	int mp = 0,cp = 0;
	for(int i = 0;i < n;i++){
		int mi,ci;
		cin >> mi >> ci;
		if(mi > ci) mp++;
		else if(ci > mi) cp++;
	}
	if(mp > cp)
		cout << "Mishka" << endl;
	else if(cp > mp)
		cout << "Chris" << endl;
	else
		cout << "Friendship is magic!^^" << endl;
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
