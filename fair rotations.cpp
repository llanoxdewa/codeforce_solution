#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
#include <string>
#include <map>

using namespace std;

// debugging
//#include "testing_unit/debug.h"
// shorcut
#define ll long long
#define ull unsigned long long
#define print(val) cout << val << '\n';
#define all(arr) arr.begin(),arr.end()

void solve(){
	int N;
	int ans = 0;
	cin >> N;
	vector<int> breads(N);
	ll total = 0;
	for(int& bread : breads){
		cin >> bread;
		total += bread;	
	}
	if(total % 2 == 1){
		print("NO");
		return;	
	}
	int i = 0;
	int even = 0;
	while(1){
		if(i == N - 1)
			i = 0;
		if(breads[i] % 2 == 1){
			breads[i]++;
			breads[i + 1]++;
			ans += 2;		
		}
		if(breads[i] % 2 == 0)
			even++;
		if(even >= N)
			break;
		i++;	
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	#ifdef LANO_DEBUG
		cout << "DEBUG IS ON" << endl;
		freopen("dbg.txt","w",stderr);
	#endif
	solve();
	return 0;
}









