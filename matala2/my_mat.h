#include <stdio.h>

typedef int Matrix[N][N];

void printMatrix(Matrix matrix);
int hasPath(Matrix matrix, int i, int j);
int findShortestPath(Matrix matrix, int i, int j);
