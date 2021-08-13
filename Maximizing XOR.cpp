#include <iostream>
#include <vector>               
#include <math.h>
#include <algorithm>
#include <set>
#include <string>
#include <map>
#include <valarray>
using namespace std;                              

// debugging
#include "testing_unit/debug.h"
//shorcut
#define ll long long
#define ull unsigned long long
#define print(val) cout << val << '\n';
#define all(arr) arr.begin(),arr.end()
#define sz(arr) (int)arr.size()
#define scan(arr,num) for(int i = 0;i<num;i++)cin>>arr[i];

void solution(){
	int big = 0;
	int B,E;
	cin >> B >> E;
	for(int i = B;i <= E;i++){
		for(int j = B;j <= E;j++){
			if((i ^ j) > big)
				big = i ^ j;
		}
	}
	print(big);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	#ifdef LANO_DEBUG
		freopen("dbg.txt","w",stderr);
	#endif
	solution();
	return 0;
}





