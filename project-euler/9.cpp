#include<bits/stdc++.h>
using namespace std;

#define ll 				long long

int main() {
	for (ll a = 0; a <= 332; a++) {
		for (ll b = a + 1; b <= 499; b++) {
			ll c = 1000 - a - b;
			if (((a * a) + (b * b)) == c * c) {
				cout << "a = " << a << "  b = " << b << "  c = " << c << endl;
				cout << a*b*c << endl;
				break;
			}
		}
	}
}