#include <bits/stdc++.h>


using namespace std;

const int N = 1e6 + 10;
int a[N];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	if (!k) {
		if (a[0] == 1) puts("-1");
		else puts("1");
	} else {
		if (a[k - 1] == a[k]) puts("-1");
		else cout << a[k - 1] << endl;
	}
	return 0;
}
