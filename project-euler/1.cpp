#include<bits/stdc++.h>
using namespace std;
#define ll 			long long

int main() {
	init();
	ll n;
	cin >> n;
	ll k = (n - 1) / 3; // number of 3 multiples below n.
	ll l = (n - 1) / 5; // number of 5 multiples below n.
	ll m = (n - 1) / 15; // number of 15 multiples below n.

	ll sum3 = (k * (3 + (k * 3))) / 2;
	ll sum5 = (l * (5 + (l * 5))) / 2;
	ll sum15 = (m * (15 + (m * 15))) / 2;

	cout << (sum3 + sum5 - sum15);

}
