#include <stdio.h>
#define V 5
int graph[V][V]; 
int path[V];   
void printSolution() {
    printf("Hamiltonian Cycle found:\n");
    for (int i = 0; i < V; i++) {
        printf("%d ", path[i]);
    }
    printf("%d\n", path[0]); 
}
int isSafe(int v, int pos, int path[]) {
    if (graph[path[pos - 1]][v] == 0) {
        return 0; 
    }
	for (int i = 0; i < pos; i++) {
        if (path[i] == v) {
            return 0;
        }
    }
 return 1;
}
int hamCycleUtil(int path[], int pos) {
    if (pos == V) {
        if (graph[path[pos - 1]][path[0]] == 1) {
            return 1; 
        } else {
            return 0;
        }
    }
	for (int v = 1; v < V; v++) {
        if (isSafe(v, pos, path)) {
            path[pos] = v;
			if (hamCycleUtil(path, pos + 1) == 1) {
                return 1; 
            }
			path[pos] = -1; 
        }
    }
	return 0; 
}
int hamCycle() {
    for (int i = 0; i < V; i++) {
        path[i] = -1; 
    }
	path[0] = 0; 
	if (hamCycleUtil(path, 1) == 0) {
        printf("No Hamiltonian Cycle found\n");
        return 0;
    }
	printSolution();
    return 1;
}
int main() {
    int exampleGraph[V][V] = {
        {0, 1, 1, 1, 0},
        {1, 0, 1, 0, 1},
        {1, 1, 0, 1, 1},
        {1, 0, 1, 0, 1},
        {0, 1, 1, 1, 0}
    };
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            graph[i][j] = exampleGraph[i][j];
        }
    }
    hamCycle();
	return 0;
}



