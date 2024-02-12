#include "my_graph.h"


void Graph::readMatrix() {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
}


void Graph::printMatrix() {
  printMatrix(matrix);
}


bool Graph::hasPath(int i, int j) {
  return hasPath(matrix, i, j);
}


int Graph::findShortestPath(int i, int j) {
  return findShortestPath(matrix, i, j);
}
