#include<bits/stdc++.h>
using namespace std;

#define IO 		freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);

int main(){
	IO
	
	// declaration bitset without initialization
	bitset<32> bset;
	cout << bset << endl;

	// declaration bitset with initialization
	bitset<32> b2(5);
	cout << b2 << endl;

	// declaration bitset with initialization
	bitset<32> b("1011");
	cout << b << endl;

	// declaration bitset with initialization
	bitset<32> b3(string("10111"));
	cout << b3 << endl;

	// count all set bit
	cout << b2.count() << endl;

	// set all bits
	bset.set();
	cout << bset << endl;

	// reset all bits 
	bset.reset();
	cout << bset << endl;

	// flip all bits
	b3.flip();
	cout << b3 << endl;

	// binary to decimal
	cout << b.to_ullong() << endl;

	// most significant bit
	int msb = (int) log2(8);
	cout << msb << endl;

	// reset msb 
	bitset<32> bb(8);
	bb[msb] = 0;
	cout << bb << endl;

	return 0;
}
