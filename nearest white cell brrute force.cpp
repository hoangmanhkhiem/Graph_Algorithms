#include<bits/stdc++.h>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, m;
	cin >> n >> m;

	int a[n][m], dist[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			dist[i][j] = INT_MAX;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j]) {
				for (int ii = 0; ii < n; ii++) {
					for (int jj = 0; jj < m; jj++) {
						dist[ii][jj] = min(dist[ii][jj],
						                   abs(i - ii) + abs(j - jj));
					}
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dist[i][j] << " ";
		} cout << '\n';
	}

	return 0;
}