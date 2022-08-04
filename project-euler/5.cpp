#include<bits/stdc++.h>
using namespace std;


#define ll 				long long
#define vi 				vector<ll>

vector<bool>prime;
void sieve(ll n) {
	ll m = sqrt(n);
	prime.resize(n + 1, true);
	prime[0] = false;
	prime[1] = false;
	for (ll i = 2; i <= m; i++) {
		for (ll j = i * i; j <= n; j += i)
			prime[j] = false;
	}
}

ll power(ll a, ll b) {
	if (b == 0)
		return 1LL;
	ll temp = power(a, b / 2) * power(a, b / 2);
	if (b & 1)
		return temp * a;
	else
		return temp;
}

int main() {
	ll n = 20;
	sieve(20);
	ll ans = 1;
	for (ll i = 2; i <= 20; i++) {
		if (prime[i]) {
			ll j = 1;
			while (power(i, j) < n) {
				j++;
			}
			ans *= power(i, j - 1);
		}
	}
	cout << ans << "\n";
}