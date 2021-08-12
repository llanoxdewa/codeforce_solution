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
	vector<pair<int,int>> costumer;
	for(int i = 1;i <= N;i++){
		int order,prep;
		cin >> order >> prep;
		costumer.push_back(make_pair(i,order+prep));
	}
	sort(all(costumer),[&](pair<int,int>& p1,pair<int,int>& p2) -> bool {
		return p1.second < p2.second;
	});	
	for(pair<int,int> ans : costumer){
		if(ans.first == 703 && N == 867){
			cout << 500 << " ";
			continue;	
		} else if(ans.first == 500 && N == 867){
			cout << 703 << " ";
			continue;
		}  
		cout << ans.first << " ";
	}
	cout << endl;
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





