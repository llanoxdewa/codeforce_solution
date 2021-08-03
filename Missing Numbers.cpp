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
	int N1,N2;
	cin >> N1;
	int bils1[N1];
	map<int,int> fbils1;
	map<int,int> fbils2;	
	for(int i=0;i<N1;i++){
		cin >> bils1[i];
		fbils1[bils1[i]]++;
	}
	cin >> N2;
	int bils2[N2];
	for(int i=0;i<N2;i++){
		cin >> bils2[i];
		fbils2[bils2[i]]++;
	}	
	sort(bils1,bils1+N1);			
	sort(bils2,bils2+N2);	
	set<int> missing;	
	for(int i = 0;i < N2;i++){
		if(!binary_search(bils1,bils1+N1,bils2[i])){
			missing.insert(bils2[i]);	
		} else if(fbils2[bils2[i]] > fbils1[bils2[i]]){
			missing.insert(bils2[i]);
		}
	}
	for(int bil : missing)
		cout << bil << " ";
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





