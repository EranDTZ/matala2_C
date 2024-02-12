
GRAPH_C = my_graph.c
KNAPSACK_C = my_Knapsack.c

GRAPH_H = my_graph.h
KNAPSACK_H = my_Knapsack.h

GRAPH_O = my_graph.o
KNAPSACK_0 = my_Knapsack.o

GRAPH = my_graph
KNAPSACK = my_Knapsack

FLAGS = -Wall -std=c11

LDFLAGS = -L.

$(GRAPH_O): $(GRAPH_C) $(GRAPH_H)
$(KNAPSACK_0): $(KNAPSACK_C) $(KNAPSACK_H)

$(GRAPH_O):
	$(CC) $(FLAGS) -c $(GRAPH_C)

$(KNAPSACK_0):
	$(CC) $(FLAGS) -c $(KNAPSACK_C)


$(GRAPH): $(GRAPH_O)
	$(CC) $(FLAGS) $(LDFLAGS) -o $@ $^

$(KNAPSACK): $(KNAPSACK_0)
	$(CC) $(FLAGS) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(GRAPH_O) $(KNAPSACK_0) $(GRAPH) $(KNAPSACK)


all: $(GRAPH) $(KNAPSACK)