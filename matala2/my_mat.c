#include "my_mat.h"
#include <limits.h>


void printMatrix(Matrix matrix) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}


int hasPath(Matrix matrix, int i, int j) {
  if (matrix[i][j] == 0) {
    return 0;
  }
  return 1;
}


int findShortestPath(Matrix matrix, int i, int j) {
  int distances[N];
  for (int k = 0; k < N; k++) {
    distances[k] = INT_MAX;
  }
  distances[i] = 0;

  
  bool used[N];
  for (int k = 0; k < N; k++) {
    used[k] = false;
  }

  
  for (int k = 0; k < N; k++) {
    
    int u = -1;
    for (int v = 0; v < N; v++) {
      if (!used[v] && (u == -1 || distances[v] < distances[u])) {
        u = v;
      }
    }

    used[u] = true;

    
    for (int v = 0; v < N; v++) {
     
      if (matrix[u][v] > 0) {
        
        int newDistance = distances[u] + matrix[u][v];

        
        if (newDistance < distances[v]) {
          distances[v] = newDistance;
        }
      }
    }
  }

  
  return distances[j];
}


