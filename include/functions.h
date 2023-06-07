#ifndef SAFESPROJECT_FUNCTIONS_H
#define SAFESPROJECT_FUNCTIONS_H

#include <iostream>
#include <set>
#include <queue>
#include <bits/stdc++.h>
#include <fstream>
#include "Graph.h"

template<typename T, typename G>
T measureTime(std::function<T(G)> func, G g, std::chrono::duration<double, std::milli> *duration){
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    T result;
    start = std::chrono::high_resolution_clock::now();
    result = func(g);
    end = std::chrono::high_resolution_clock::now();
    *duration = end - start;
    return result;
}

void BFSsearch(Graph G, int vert, int * visited);
int findMinDestroyed(Graph g);
bool parseInt(const char *str, int *n);
Graph createGraphFromIstream(std::istream& myfile);
Graph createGraphFromIstream2(std::istream& myfile);


#endif //SAFESPROJECT_FUNCTIONS_H
