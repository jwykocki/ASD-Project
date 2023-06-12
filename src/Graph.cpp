#include "Graph.h"

void Graph:: addEdge(int i, int j){
if(i>size-1 || i<0) return;
if(j>size-1 || j<0) return;
A[i][j] = true;
}

void Graph:: removeEdge(int i, int j){
    if(i>size-1 || i<0) return;
    if(j>size-1 || j<0) return;
    A[i][j] = false;
}

bool Graph::hasEdge(int i, int j){
    if(i>size-1 || i<0) return false;
    if(j>size-1 || j<0) return false;
    return A[i][j];
}

std::set<int> Graph:: inConnections(int i){
    std::set<int> s;
    if(i>size-1 || i<0) return s;
    for(int m = 0; m<size; m++){
        if(A[m][i]==1){
            s.insert(m);
        }
    }
    return s;
}

std::set<int> Graph:: outConnections(int i){
    std::set<int> s;
    if(i>size-1 || i<0) return s;
    for(int m = 0; m<size; m++){
        if(A[i][m]==1){
            s.insert(m);
        }
    }
    return s;
}

std::set<int> Graph:: allConnections(int i){
    std::set<int> s;
    if(i>size-1 || i<0) return s;
    for(int m = 0; m<size; m++){
        if(A[i][m]==1){
            s.insert(m);
        }
        if(A[m][i]==1){
            s.insert(m);
        }
    }
    return s;
}

int Graph::getSize(){
    return size;
}

bool Graph:: get(int n, int m){
    return A[n][m];
}

void Graph::printMatrix(){
    for(int i=0 ; i<size; i++){
        for(int j=0; j<size; j++){
            std::cout<<A[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

Graph::Graph(int numVert){ //liczba wierzcholkow
    if(numVert<1) exit(2);

    int i, j;
    A = new bool * [numVert];  // Tworzymy tablicę wskaźników

    for( i = 0; i<numVert; i++ ){
        A[i] = new bool[numVert]; // Tworzymy wiersze
    }
    for( i = 0; i < numVert; i++ ){
        for( j = 0; j < numVert; j++ ){
            A [ i ][ j ] = false;
        }
    }
    size = numVert;
}