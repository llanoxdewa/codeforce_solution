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
//shorcut
#define ll long long
#define ull unsigned long long
#define print(val) cout << val << '\n';
#define all(arr) arr.begin(),arr.end()
#define sz(arr) (int)arr.size()
#define scan(arr,num) for(int i = 0;i<num;i++)cin>>arr[i];


void solution(){
	int N,K;
	cin >> N >> K;
	vector<vector<int>>	bils(2,vector<int>(N));
	scan(bils[0],N);
	scan(bils[1],N);
	sort(all(bils[0]));	
	sort(all(bils[1]),greater<int>());
	for(int i = 0;i < N;i++){
		if(bils[0][i] + bils[1][i] < K){
			print("NO");
			return;
		}	
	}
	print("YES");
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	#ifdef LANO_DEBUG
		freopen("dbg.txt","w",stderr);
	#endif
	int T;
	cin >> T;
	while(T--)
		solution();
	return 0;
}





