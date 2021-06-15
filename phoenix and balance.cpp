#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

// debugging
#include "debug.h"

// shorcut data type
#define ll long long
#define ull unsigned long long




void solve(){
	int n;
	cin >> n;
	int div = n/2;
	ll x = pow(2,n),y = 0;
	for(int i = 1;i < n;i++){
		if(i < div){
			x += pow(2,i);
			continue;
		}
		y += pow(2,i);
	}
	cout << x - y << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("dbg.txt","w",stderr);
   	#endif
	int T;
	cin >> T;
	while(T--)
		solve();
	return 0;
}
