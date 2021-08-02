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
#define sz(arr) (int)arr.size()
#define scan(arr,num) for(int i = 0;i<num;i++)cin>>arr[i]; 

void solution(){
	string words;	
	cin >> words;
	vector<char> hasben;	
	int cost = 0;
	for(char w : words){
		if(binary_search(all(hasben),w))
			continue;	
		cost++;	
		hasben.push_back(w);	
		sort(all(hasben));	
	}
	print(cost);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	#ifdef LANO_DEBUG
		freopen("dbg.txt","w",stderr);
	#endif
	int T;cin >> T;
	while(T--)
		solution();
	return 0;
}





