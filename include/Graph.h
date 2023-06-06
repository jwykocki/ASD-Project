#ifndef SAFESPROJECT_GRAPH_H
#define SAFESPROJECT_GRAPH_H

#include <iostream>
#include <set>
#include <queue>
#include <bits/stdc++.h>
#include <fstream>

class Graph{

private:
    bool** A;
    int size;

public:

    Graph(int numVert);

    void addEdge(int i, int j);

    void removeEdge(int i, int j);

    bool hasEdge(int i, int j);

    std::set<int> inConnections(int i);

    std::set<int> outConnections(int i);

    std::set<int> allConnections(int i);

    int getSize();

    bool get(int n, int m);

    void printMatrix();
};

#endif //SAFESPROJECT_GRAPH_H
