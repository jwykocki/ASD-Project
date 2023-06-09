#include "../include/functions.h"

void BFSsearch(Graph G, int vert, int * visited){
    visited[vert] = 1; // oznaczamy wierzchołek s jako odwiedzony
    std::queue<int> q;
    q.push(vert); // wstawiamy s do kolejki
    int n = G.getSize();

    while (!q.empty()) {
        int v = q.front(); // bierzemy pierwszy element z kolejki
        q.pop();

        for (int i = 0; i < n; i++) {
            if (G.hasEdge(v, i)) {
                if(visited[i]==0) {
                    visited[i] = 1; // oznaczamy wierzchołek i jako odwiedzony
                    q.push(i); // wstawiamy i do kolejki
                }
            }
        }
    }
}

int BFSsearchCounter(Graph G, int vert, int * visited){
    int counter = 0;
    visited[vert] = 1; // oznaczamy wierzchołek s jako odwiedzony
    counter++;
    std::queue<int> q;
    q.push(vert); // wstawiamy s do kolejki
    int n = G.getSize();

    while (!q.empty()) {
        int v = q.front(); // bierzemy pierwszy element z kolejki
        q.pop();

        for (int i = 0; i < n; i++) {
            if (G.hasEdge(v, i)) {
                if(visited[i]==0) {
                    visited[i] = 1; // oznaczamy wierzchołek i jako odwiedzony
                    counter++;
                    q.push(i); // wstawiamy i do kolejki
                }
            }
        }
    }
    return counter;
}
//Funkcja szukajaca najmniejszej  liczby rozbitych sejfow
int findMinDestroyed2(Graph g) {
    std::cout<<"TEST\n";
    int destroyed = 0;
    int gsize = g.getSize();
        if(gsize<1) return 0;
    int opened[gsize]; //tablica zapisujaca odwiedzone wierzcholki grafu
    int currOpened[gsize]; //tablica zapisujaca odwiedzone wierzcholki grafu podczas przeszukiwania BFS
    int left = gsize; //liczba wierzcholkow ktora zostala do odwiedzenia

    for(int j=0; j<gsize; j++){
        opened[j] = 0;
        currOpened[j] = 0;
    }

    //przejdz przez wszystkie sejfy i zniszcz ktore musza byc zniszczone (maja klucz do siebie)
    for(int i=0; i<gsize; ++i){

        if(opened[i]==1) { /*jest wsrod otwartych*/
            continue;
        }

        std::set<int> inConn = g.inConnections(i);
        if(inConn.size()==1 && inConn.count(i)==1) { /*jego jedyne inConection idze od niego samego*/
            destroyed++;
            int c = BFSsearchCounter(g, i, opened);
            left -= c;
        }

        //nie ma takiej sytuacji - do kazdego sejfu musi byc gdzies klucz ?
        //        }else if(inConn.empty()) { /*nie ma zadnych inConenction*/
        //            destroy = true;
        //        }

    }

    //z tych ktore pozostaly - policz jakie otowrza najwiecej sejfow - i wsadz je do vectora
    std::vector<std::pair<int, int>> values;
    for(int i=0; i<gsize; ++i){
        if(opened[i]==1 || currOpened[i]==1 ) continue;
        values.emplace_back(BFSsearchCounter(g, i, currOpened), i);
    }

    sort(values.begin(), values.end(), std::greater<>()); //posortuj wierzcholki od liczby otworzonych przez nie sejfow

    //az wszystkie nie zostana odwiedzone przechodz graf w kolejnosci z vectora
    for(int i=0; left>0; i++){
        int ix = values[i].second;
        if(opened[ix]==1) continue;
        destroyed++;
        int c = BFSsearchCounter(g, ix, opened);
        left-=c;
    }

    return destroyed;
}

bool parseInt(const char *str, int *n) //funkcja zamienia ciag znakow na liczbe typu int uzywajac funkcji strtol
{
    char *temp;
    errno = 0;
    long val = strtol(str, &temp, 10); //10 means decimal format;

    if (temp == str || *temp != '\0' || ((val == LONG_MIN || val == LONG_MAX) && errno == ERANGE)){
        return false;
    }
    else if(val > INT_MAX || val < INT_MIN){
        return false;
    }

    *n = (int) val; //rzutuj long na int i zapisz w n

    return true;
}

Graph createGraphFromIstream(std::istream& myfile){

    std::string s;
    getline(myfile, s);
    int numVertices;
    if(!parseInt(s.c_str(), &numVertices)){
        exit( -1);
    }
    s.clear();
    if(numVertices<0) exit(-1);
    //stworz graf
    Graph graph(numVertices);

    for(int i=0; i<numVertices; i++){
        getline(myfile, s);
        if(s.empty()) continue;
        char separator = ' ';
        int j = 0;
        int n;
        // Temporary string used to split the string.
        std::string tempS;
        while (s[j] != '\0') {
            if (s[j] != separator) {
                // Append the char to the temp string.
                tempS += s[j];
            } else {
                if(!parseInt(tempS.c_str(), &n)) exit(-1);
                if(n<1 || n>numVertices) exit(-1);
                graph.addEdge(n-1, i);
                tempS.clear();
            }
            j++;
        }
        if(!parseInt(tempS.c_str(), &n)) exit(-1);
        if(n<1 || n>numVertices) exit(-1);
        graph.addEdge(n-1, i);
        s.clear();
    }
    return graph;
}

Graph createGraphFromIstreamOneLine(std::istream& myfile){

    std::string s;
    getline(myfile, s);
    int numVertices;
    if(!parseInt(s.c_str(), &numVertices)){
        exit( -1);
    }
    s.clear();
    if(numVertices<0) exit(-1);
    //stworz graf
    Graph graph(numVertices);


        getline(myfile, s);
        char separator = ' ';
        int j = 0;
        int safe = 0;
        int n;
        // Temporary string used to split the string.
        std::string tempS;
        while (s[j] != '\0') {
            if (s[j] != separator) {
                // Append the char to the temp string.
                tempS += s[j];
            } else {
                if(!parseInt(tempS.c_str(), &n)) exit(-1);
                if(n<1 || n>numVertices) exit(-1);
                graph.addEdge(n-1, safe);
                tempS.clear();
                safe++;
            }
            j++;
        }
        if(!parseInt(tempS.c_str(), &n)) exit(-1);
        if(n<1 || n>numVertices) exit(-1);
        graph.addEdge(n-1, safe);
        s.clear();

    return graph;
}
