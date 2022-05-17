#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	if (1 == n) {
		cout << 0;
		return 0;
	}

	auto l = ll{ 0 };
	auto r = ll{ 0 };
	auto t = ll{ 0 };
	auto b = ll{ 0 };
	for (int i = 0; i < n; ++i) {
		ll x, y;
		cin >> x >> y;

		if (0 == i) {
			l = x;
			r = x;
			t = y;
			b = y;

			continue;
		}

		if (x < l) {
			l = x;
		}

		if (r < x) {
			r = x;
		}

		if (t < y) {
			t = y;
		}

		if (y < b) {
			b = y;
		}
	}

	cout << (r - l) * (t - b);

	return 0;
}