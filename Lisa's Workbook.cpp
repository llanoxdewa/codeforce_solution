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
	int N,K;
	cin >> N >> K;
	vector<int> problems(N);
	for(int& problem : problems)
		cin >> problem; 
	int chapter = 1;
	vector<int> PC;	
	int page = 1;
	int ans = 0;	
	while(chapter <= N){
		for(int p = (PC.size() >= 1)? PC.back() + 1 : 1,count = 0;p <= problems[chapter - 1] && count < K;p++,count++){
			if(p == page) ans++;	
			PC.push_back(p);	
		}	
		page++;	
		if(PC.back() >= problems[chapter - 1]){
			PC.clear();
			chapter++;
		}	
	}
	print(ans);
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









