#include "my_mat.h"

class Graph {
public:
  void readMatrix();
  void printMatrix();
  bool hasPath(int i, int j);
  int findShortestPath(int i, int j);

private:
  Matrix matrix;
};
