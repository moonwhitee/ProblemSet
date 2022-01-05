#include <bits/stdc++.h>


using namespace std;

const int N = 1e6 + 10, INF = 0x3f3f3f3f;
typedef long long LL;
typedef pair<int, int> PII;
int h[N];
int n, m;
int res;

bool check(int x) {
	LL s = 0;
	for (int i = 0; i < n; i++) {
		s += h[i] / x;
	}
	return s >= m;
}

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) scanf("%d", &h[i]);
	int l = 0, r = INF;
	while (l < r) {
		int mid = l + r + 1 >> 1;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}
	printf("%d\n", l);
	return 0;
}
