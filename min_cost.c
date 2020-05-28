
// This is the minimum cost problem
// Given a matrix of R by C
// We should find the minimum cost of going through
// 0,0 to m,n

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define R      3
#define C      3

int min_cost(const int cost[R][C], size_t m, size_t n)
{
	// Construct a helper two-dim array
	// to fill the sum of all elements
	// that come through the path

	assert(m < R);
	assert(n < C);
	
	int tc[R][C];
	tc[0][0] = cost[0][0];

	for (size_t i = 1; i <= m; i++)
		tc[i][0] = tc[i - 1][0] + cost[i][0];
	for (size_t i = 1; i <= n; i++)
		tc[0][i] = tc[0][i - 1] + cost[0][i];

	for (size_t i = 1; i <= m; i++)
		for (size_t j = 1; j <= n; j++)
		{
			int min1 = min(tc[i - 1][j], tc[i - 1][j - 1]);
			int min = min(min1, tc[i][j - 1]);

			tc[i][j] = min + cost[i][j];
		}

	return tc[m][n];
}

int main()
{
	int arr[R][C] = { {1,2,3}, {4,8,2}, {1,5,3} };

	int cost = min_cost(arr, 2, 2);

	printf("%d", cost);
	
	return 0;
}
