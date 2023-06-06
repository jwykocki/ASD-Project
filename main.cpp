#include "include/functions.h"
#include "include/Graph.h"

int main(int args, char *argv[])
{
    using namespace std;
    Graph graph(1); //initial
    string path;

    if(args>1){
        path = argv[1];
        fstream inputFile;
        inputFile.open(path);
        if(!inputFile.is_open()) exit(-11);
        graph = createGraphFromIstream(inputFile);
    }else{
        cout<<R"(Nie znaleziono sciezki do pliku wejsciowego jako argumentu wywolania programu, podaj parametry zadania w formacie:
            pierwsza linia: liczba sejfow
            kazda kolejna linia: sejfy do ktorych aktualny sejf ma w srodku klucz (oddzielone spacja)
            )";
        graph = createGraphFromIstream(cin);
    }

    cout<<"Macierz sasiedztwa grafu: \n";
    graph.printMatrix();
    int min = findMinDestroyed(graph);

    cout<<"Minimalna liczba sejfow, ktore nalezy zniszczyc: "<<min<<"\n";
}

