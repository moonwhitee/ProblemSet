#include <bits/stdc++.h>


using namespace std;

int a[110][110];
char s[110];

int main() {
	int n;
	cin >> n;
	scanf("%s", s);
	int cnt = -1;
	pair<int, int> res;
	for (int i = 0; i < n - 1; i++) {
		int x = s[i] - 'A', y = s[i + 1] - 'A';
		a[x][y]++;
		if (a[x][y] > cnt) {
			res.first = x, res.second = y; 
			cnt = a[x][y];
		}
	}
	printf("%c%c", res.first + 'A', res.second + 'A');
	return 0;
}
