#include <iostream>


using namespace std;

const int N = 1e6 + 10, INF = 0x3f3f3f3f;

int main() {
	int n, m;
	cin >> n >> m;
	while (m--) {
		if (n % 10) n--;
		else n /= 10;
	}
	cout << n << endl;
	return 0;
}
