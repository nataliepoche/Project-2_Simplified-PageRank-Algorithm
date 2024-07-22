//
// Created by Natalie Poche on 7/22/2024.
//


// used main template provided
#include <iostream>
#include "graph.h"
using namespace std;

int main(){

   AdjacencyList graph;

    int no_of_lines, power_iterations;
    string from, to;
    cin >> no_of_lines;
    cin >> power_iterations;
    for(int i = 0; i < no_of_lines; i++){
        cin >> from;
        cin>> to;

        // Insert vertices
        graph.insertEdge(from, to);
    }

    // Get PageRanks
    graph.PageRank(power_iterations);

    return 0;
}