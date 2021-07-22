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

void solve(){
	int N;
	cin >> N;
	vector<string> stones(N,"");
	scan(stones,N);
	int gems = 0;	
	set<char> sstones(all(stones[0]));	
	for(char stone : sstones){
		int cnt = 0;	
		for(int j = 0;j<N;j++){
			if(*find(all(stones[j]),stone))	
				cnt++;
		}		
		if(cnt == N)
			gems++;
	}
	print(gems);
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





