//
// Created by Owner on 7/22/2024.
//

#define CATCH_CONFIG_MAIN

#include <catch2/catch_test_macros.hpp>

#include "graph.h"
#include "catch.hpp"
# define private public

void parseInput(AdjacencyList &graph, const string &input, int &power_iteration){
    istringstream iss(input);
    int num_edges;
    iss >> num_edges >> power_iteration;

    string from, to;
    for(int i = 0; i < num_edges; i++){
        iss >> from >> to;
        graph.insertEdge(from, to);
    }
}

TEST_CASE("Test 1 Given", "[flag]"){
    AdjacencyList graph;
    int power_iterations;

    string input = "7 2\n"
                   "google.com gmail.com\n"
                   "google.com maps.com\n"
                   "facebook.com ufl.edu\n"
                   "ufl.edu google.com\n"
                   "ufl.edu gmail.com\n"
                   "maps.com facebook.com\n"
                   "gmail.com maps.com\n";

    parseInput(graph, input, power_iterations);
    graph.PageRank(power_iterations);

    auto rank = graph.getPageRanks();
    REQUIRE(rank["facebook.com"] == Approx(0.30f).epsilon(0.01));
    REQUIRE(rank["gmail.com"] == Approx(0.15f).epsilon(0.01));
    REQUIRE(rank["google.com"] == Approx(0.10f).epsilon(0.01));
    REQUIRE(rank["maps.com"] == Approx(0.25f).epsilon(0.01));
    REQUIRE(rank["ufl.edu"] == Approx(0.20f).epsilon(0.01));
}
