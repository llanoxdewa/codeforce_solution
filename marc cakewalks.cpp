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
//#include "testing_unit/debug.h"
// shorcut
#define ll long long
#define ull unsigned long long
#define print(val) cout << val << '\n';
#define all(arr) arr.begin(),arr.end()
#define sz(arr) (int)arr.size()
#define scan(arr,num) for(int i = 0;i<num;i++)cin>>arr[i]; 



void solution(){
	int N;	
	cin >> N;
	int cupcakes[N];
	scan(cupcakes,N);
	sort(cupcakes,cupcakes+N,greater<int>());	
	ll ans = 0;	
	for(int i = 0;i < N;i++){
		ans += pow(2,i) * cupcakes[i];
	}
	print(ans);
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





