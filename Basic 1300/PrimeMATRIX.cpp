/*
You've got an n × m matrix

In one move, you can apply a single transformation to the matrix: choose an arbitrary element of the matrix and increase it by 1

A matrix is prime if at least one of the two following conditions fulfills:

1)the matrix has a row with prime numbers only;
2)the matrix has a column with prime numbers only

count the minimum number of moves needed to get a prime matrix
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    const size_t M = 100100;
    bool prime[M];
    prime[0] = false;
    prime[1] = false;
    fill(prime + 2, prime + M, true);
    for (int i = 2; i * i < M; ++i)     //Sieve of Erastothenes Method 
    {                                   //to generate and store primes till M
        if (prime[i])
        {
            for (int j = i + i; j < M; j += i)
            {
                prime[j] = false;
            }
        }
    }

    int n, m, a, rows[500], cols[500];
    scanf("%d%d", &n, &m);
    fill(rows, rows + n, 0);
    fill(cols, cols + m, 0);

    for (int r = 0; r < n; ++r)
    {
        for (int c = 0; c < m; ++c)
        {
            scanf("%d", &a);
            int x = a;
            while (!prime[x])
            {
                ++x;
            }
            rows[r] += (x - a);
            cols[c] += (x - a);
        }
    }

    int min_row = *min_element(rows, rows + n);
    int min_col = *min_element(cols, cols + m);
    printf("%d\n", min(min_row, min_col));
    return 0;
}
