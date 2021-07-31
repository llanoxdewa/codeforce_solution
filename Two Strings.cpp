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
	string s1,s2;	
	cin >> s1 >> s2;
	set<char> ss1(all(s1));
	set<char> ss2(all(s2));
	string ss = s1 + s2;	
	set<char> sumss(all(ss));
	if(sz(sumss) == sz(ss1) + sz(ss2)){
		print("NO");
	} else 
		print("YES");
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	#ifdef LANO_DEBUG
		freopen("dbg.txt","w",stderr);
	#endif
	int T;cin >> T;	
	while(T--)	
		solve();	
	return 0;
}





