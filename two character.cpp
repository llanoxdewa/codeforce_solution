#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
#include <string>
#include <map>
//#include <valarray>
//#include <bitset>
//#include <assert.h>

using namespace std;
// debugging
#ifdef LOCAL
	#include "testing_unit/debug.h"
#endif

int main(){  
	// fast IO	
	ios_base::sync_with_stdio(false),cin.tie(nullptr);
	int N;
	string s;
	cin >> N >> s;
	int ans = 0;
	vector<char> vc;
	for(char c : s){
		if(find(vc.begin(),vc.end(),c) == vc.end()){
			vc.push_back(c);	
		}
	}
	int n = int(vc.size());	
	for(int i = 0;i < n - 1;++i){
		for(int x = i + 1;x < n;++x){ 
			int len = 0;	
			bool f = true;	
			bool valid = true;
			for(int j = 0;j < N;++j){
				if(s[j] == vc[i] && !f || s[j] == vc[x] && f){
					valid = false;
					break;
				}
				if(s[j] == vc[i] && f){
					++len;	
					f = false;	
				} else if(s[j] == vc[x] && !f){
					++len;
					f = true;	
				}
			}
			if(valid)
				ans = max(ans,len);	
		}
	}
	cout << ans << '\n';

return 0;}













