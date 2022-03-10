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

const int MAX = 26 * int(1e6) + 7; 
int cek[MAX];

int main(){  
	// fast IO
	ios_base::sync_with_stdio(false),cin.tie(nullptr);

	string s;
	int n;
	cin >> s >> n;
	vector<int> u(n);
	int N = int(s.size());

	for(int& el : u) cin >> el;
	cek[s[N - 1] - 96] = 1;
	debug(N);
	for(int i = 0;i < N - 1;++i){
		int total = (int)s[i] - 96,li = i;
		char bef = s[i];	
		for(int j = i + 1;j < N;++j){
			li = j;
			cek[total] = 1;
			if(s[j] == bef) total += s[j] - 96;	
			else break;
			bef = s[j];	
		}
		debug(total);
		if(li > i)
			i = li - 1;	
		cek[total] = 1;	
	}
	for(int q : u){
		if(cek[q]) cout << "Yes" << '\n';
		else cout << "No" << '\n';
	}

}













