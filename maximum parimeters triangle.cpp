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
	int N;
	cin >> N;
	vector<int> bils(N);	
	scan(bils,N);
	sort(all(bils),greater<int>());	
	for(int i = 0;i <= N - 3;i++){
		if(bils[i+1] + bils[i+2] > bils[i]){
			cout << bils[i+2] << " " << bils[i+1] << " " << bils[i] << endl;
			return;	
		}	
	}
	print(-1);
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





