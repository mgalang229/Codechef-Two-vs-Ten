#include <bits/stdc++.h>

using namespace std;

void decode() {
	long long x;
	cin >> x;
	int cnt = 0;
	while(x % 10 != 0) {
		x *= 2;
		cnt++;
	}
	if(cnt > 10) cnt = -1;
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
