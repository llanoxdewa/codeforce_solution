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
	vector<vector<int>> contest(N,vector<int>(2)); 	
	int luck = 0;	
	for(int i = 0;i < N;i++){
		cin >> contest[i][0] >> contest[i][1];
	}	
	sort(all(contest),[&](vector<int>& v1,vector<int>& v2) -> bool {
		return v1[0] > v2[0];
	});	
	for(int i = 0;i < N;i++){
		if(contest[i][1] && K){
			luck += contest[i][0];
			K--;	
		} else if(contest[i][1] && !K){
			luck -= contest[i][0];
		} else if(!contest[i][1]){
			luck += contest[i][0];
		}
	}
	print(luck);
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





