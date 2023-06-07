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

int findMinDestroyed(Graph g) {
    int destroyed = 0;
    int gsize = g.getSize();
    int opened[gsize];
    std::vector<std::pair<size_t, int>> toOpen;

    for(int j=0; j<gsize; j++){
        opened[j] = 0;
    }

    //trzeba zniszczyc
    //1) te ktore nie maja inConnection albo maja tylko od siebie
    //2) cykle zamkniete - czyli bierzemy po koeli wierzcholki i ich out connection dodajemy do otwartych

    for(int i=0; i<gsize; i++){
        bool destroy = false;
        std::set<int> inConn = g.inConnections(i);

        if(opened[i]==1) { /*nie ma go wsrod otwartych*/
            continue;
        }

        if(inConn.size()==1 && inConn.count(i)==1) { /*jego jedyne inConection idze od niego samego*/
            destroy = true;
        }else if(inConn.empty()) { /*nie ma zadnych inConenction*/
            destroy = true;
        }

        //jesli spelnial ktorys z warunkow, musi na pewno zostac zniszczony

        if(destroy){
            destroyed++;
            std::cout<<"zwiekszam1\n";
            BFSsearch(g, i, opened);
        }else{
            std::pair<size_t, int> p;
            p.second = i;
            p.first = g.outConnections(i).size(); //klucz
            toOpen.push_back(p);
        }
    }



    sort(toOpen.begin(), toOpen.end(), std::greater<>());
    //    wierzcholki w vectorze sa posortowane malejaco od najwiekszej liczby outConnections (sa najbardziej
//    oplacalne do rozbicia wiec bedzie to najlepsza opcja

    for(auto pair : toOpen){
        int i = pair.second;
        std::cout<<"mapa "<<i<<"\n";
        if(opened[i]==0){
            destroyed++;
            std::cout<<"zwiekszam  "<<i<<"\n";
            BFSsearch(g, i, opened);
        }
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
                graph.addEdge(i, n-1);
                tempS.clear();
            }
            j++;
        }
        if(!parseInt(tempS.c_str(), &n)) exit(-1);
        if(n<1 || n>numVertices) exit(-1);
        graph.addEdge(i, n-1);
        s.clear();
    }
    return graph;
}

Graph createGraphFromIstream2(std::istream& myfile){

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
                std::cout<<"n = "<<n<<"\n";
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
