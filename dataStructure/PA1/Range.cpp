#include <iostream>
#include <cmath>
#include "vector.h"
using namespace std;


int binSearch(Vector<int> let, int num, int lo, int hi){ 
	while (lo < hi){
		int mi = (lo + hi) >> 1;
		(num < let[mi]) ? hi = mi : lo = mi + 1;
	}
	return --lo;
}

void qSort(Vector<int> let, int low, int high){
	int lo = low;
	int hi = high;
	int x = let[lo];
	if (low >= high){
		return;
	}
	while (lo < hi){
		while (lo < hi && x <= let[hi])
			--hi;
		let[lo] = let[hi];

		while (lo < hi && let[lo] < x)
			++lo;
		let[hi] = let[lo];
	}
	let[lo] = x;
	qSort(let, low, lo - 1);
	qSort(let, lo + 1, high);
}

int main(){

	int num, count;

	cin >> num >> count;

	Vector<int> let(num);

	for (int i = 0; i != num; ++i){
		cin >> let[i];
	}

	qSort(let, 0, num - 1);

	for ( int i = count; i != 0; --i ){
		int lo, hi;
		cin >> lo >> hi;
		int loSt = binSearch ( let, lo, 0, num );
		int hiSt = binSearch ( let, hi, loSt, num );
		int result = 0;
		cout<<loSt<<endl;
		cout<<hiSt<<endl;
		if ( lo == let[num-1] ){
			cout << 1 << endl;
		}else if( loSt == hiSt || loSt == -1 || hiSt == -1){
			result = (hiSt>loSt)?hiSt-loSt:loSt-hiSt;
			cout << result << endl;
		}else{
			result = (hiSt>loSt)?hiSt-loSt:loSt-hiSt + 1;
		    cout << result << endl;
		}
	}
		
	return 0;
}
