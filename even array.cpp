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
	int even = 0,odd = 0;
	cin >> N;
	int bil[N];
	for(int i = 0;i < N;i++)
		cin >> bil[i];
	for(int i = 0;i < N;i++){
		if(i%2 != bil[i]%2){
			if(bil[i]%2==0)
				even++;
			else
				odd++;
		}
	}
	cout << ((even==odd)? even : -1) << endl;
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
