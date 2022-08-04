#include<bits/stdc++.h>
using namespace std;

#define ll 				long long

int main() {
	ll start = 2, temp = 8;
	ll x;
	ll sum = 10;
	while (1) {
		x = 4 * temp + start;
		start = temp;
		temp = x;
		if (x <= 4000000)
			sum += x;
		else
			break;
	}
	cout << sum;
}