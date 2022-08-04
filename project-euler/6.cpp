#include<bits/stdc++.h>
using namespace std;


#define ll 				long long

ll ab(ll x) {
	if (x >= 0)
		return x;
	return -x;
}

int main() {
	ll n = 100;
	ll sum = n * (n + 1) / 2;
	sum = sum * sum;
	ll sq = (n * (n + 1) * (2 * n + 1)) / 6;
	cout << ab(sq - sum) << "\n";
}