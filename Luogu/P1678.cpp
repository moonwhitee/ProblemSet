#include <bits/stdc++.h>


using namespace std;

typedef long long LL;
const int N = 1e6 + 10;
int a[N], b[N];
int n, m;

int g(int n) {
	if (n >= 0) return n;
	else return -n;
}

int find1(int x) {
	int l = 0, r = m - 1;
	while (l < r) {
		int mid = l + r >> 1;
		if (a[mid] >= x) r = mid;
		else l = mid + 1;
	}
	return a[l];
}

int find2(int x) {
	int l = 0, r = m - 1;
	while (l < r) {
		int mid = l + r + 1 >> 1;
		if (a[mid] <= x) l = mid;
		else r = mid - 1;
	}
	return a[l];
}

int main() {
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n; i++) scanf("%d", &b[i]);
	sort(a, a + m);
	LL sum = 0;
	for (int i = 0; i < n; i++) {
		int n1 = g(b[i] - find1(b[i])), n2 = g(b[i] - find2(b[i]));
		sum += min(n1, n2);
	}
	printf("%lld\n", sum);
	return 0;
}
