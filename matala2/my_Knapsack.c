#include "my_Knapsack.h"

int knapSack(Item items[], int n, int capacity, int result[]) {
  
  int dp[n + 1][capacity + 1];

  
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= capacity; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = 0;
        }
      }
    }
  }