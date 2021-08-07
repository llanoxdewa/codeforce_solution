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
	vector<string> vstr(N,"");	
	scan(vstr,N);
	for(string& str : vstr)
		sort(all(str));
	for(int i=0;i<N;i++){
		for(int j = 0;j < N-1;j++){
			if(vstr[j][i] > vstr[j+1][i]){
				print("NO");
				return;
			}			
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
	int T;cin >> T;
	while(T--)
		solution();
		
	return 0;
}





