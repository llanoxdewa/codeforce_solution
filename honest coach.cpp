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
	int N;
	cin >> N;
	int bils[N];
	for(int i = 0;i < N;i++)
		cin >> bils[i];
	sort(bils,bils+N);
	int min = bils[N-1] - bils[N-2];
	for(int i = 0;i < N - 1;i++)
		if((bils[i + 1] - bils[i]) < min) min = bils[i + 1] - bils[i];
	cout << min << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("dbg.txt","w",stderr);
   	#endif
	int t;cin >> t;
	while(t--)
		solve();
	return 0;
}
