#include <stdio.h>


typedef struct Item {
  int weight;
  int value;
} Item;


int knapSack(Item items[], int n, int capacity, int result[]);
