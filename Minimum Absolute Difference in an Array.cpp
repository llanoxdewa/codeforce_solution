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
	ll bils[N];
	scan(bils,N);
	sort(bils,bils+N,greater<ll>());	
	ll mindif = abs(bils[0] - bils[1]);	
	for(int i = 1;i < N - 1;i++){
		if(abs(bils[i] - bils[i + 1]) < mindif)
			mindif = abs(bils[i] - bils[i + 1]);
	}

	print(mindif);
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





