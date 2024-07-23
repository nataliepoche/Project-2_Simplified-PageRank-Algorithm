////
//// Created by Owner on 7/22/2024.
////
//
//#define CATCH_CONFIG_MAIN
//
//#include <catch2/catch_test_macros.hpp>
////#include <catch2/catch.hpp>
//
//#include "graph.h"
////using namespace Catch;
////# define private public
//
//void parseInput(AdjacencyList &graph, const string &input, int &power_iteration, int &num_edges){
//
//    // Reads input
//    istringstream iss(input);
//
//    // sets the number of edges and power iteration as the first two numbers with space
//    iss >> num_edges >> power_iteration;
//
//    string from, to;
//
//    // Goes through each edge value
//    for(int i = 0; i < num_edges; i++){
//
//        // Reads line for two links which are separated by a space
//        iss >> from >> to;
//
//        // Inserts links into map
//        graph.insertEdge(from, to);
//    }
//}
//
//bool checkTest(AdjacencyList &graph, const string &expectedOutput){
//    auto rank = graph.getRoundedPageRanks();
//
//    // Reads the expected output
//    istringstream iss(expectedOutput);
//    string link;
//    float num;
//
//    // Goes through each item in pageRank
//    for(int i = 0; i < rank.size(); i++){
//
//        // Assigns values to link and number variable separated by space
//        iss >> link >> num;
//
//        // If the rank value is not equal to the number value then it is false
//        if(rank[link] != num) {
//            return false;
//        }
//    }
//
//    // returns true if all links are equal to expected number values
//    return true;
//}
//
//TEST_CASE("Test 1 Given", "[given]"){
//    AdjacencyList graph;
//    int power_iterations;
//    int num_edges;
//
//    string input = "7 2\n"
//                   "google.com gmail.com\n"
//                   "google.com maps.com\n"
//                   "facebook.com ufl.edu\n"
//                   "ufl.edu google.com\n"
//                   "ufl.edu gmail.com\n"
//                   "maps.com facebook.com\n"
//                   "gmail.com maps.com\n";
//
//    parseInput(graph, input, power_iterations, num_edges);
//    graph.PageRank(power_iterations);
//
//    auto rank = graph.getRoundedPageRanks();
//    REQUIRE(rank["facebook.com"] == 0.20f);
//    REQUIRE(rank["gmail.com"] == 0.20f);
//    REQUIRE(rank["google.com"] == 0.10f);
//    REQUIRE(rank["maps.com"] == 0.30f);
//    REQUIRE(rank["ufl.edu"] == 0.20f);
//}
//
//TEST_CASE("Unique Test 1", "[given]"){
//    AdjacencyList graph;
//    int power_iterations;
//    int num_edges;
//
//    string input = "203 9\n"
//                   "weather.com facebook.com\n"
//                   "apple.com google.com\n"
//                   "zoom.us pcbuildinguf.com\n"
//                   "twitter.com chase.com\n"
//                   "google.com twitter.com\n"
//                   "youtube.com python.org\n"
//                   "twitter.com pcbuildinguf.com\n"
//                   "youtube.com weather.com\n"
//                   "weather.com openai.com\n"
//                   "pcbuildinguf.com python.org\n"
//                   "zoom.us reactjs.org\n"
//                   "reactjs.org weather.com\n"
//                   "roblox.com facebook.com\n"
//                   "youtube.com microsoft.com\n"
//                   "disney.com ufl.edu\n"
//                   "aman.com ufl.edu\n"
//                   "twitter.com roblox.com\n"
//                   "ufl.edu zoom.us\n"
//                   "reactjs.org stackoverflow.com\n"
//                   "python.org weather.com\n"
//                   "github.com stackoverflow.com\n"
//                   "disney.com roblox.com\n"
//                   "facebook.com weather.com\n"
//                   "facebook.com zoom.us\n"
//                   "youtube.com roblox.com\n"
//                   "weather.com samsung.com\n"
//                   "chase.com mozilla.org\n"
//                   "github.com weather.com\n"
//                   "facebook.com mozilla.org\n"
//                   "aman.com samsung.com\n"
//                   "aman.com apple.com\n"
//                   "chase.com samsung.com\n"
//                   "google.com github.com\n"
//                   "pcbuildinguf.com github.com\n"
//                   "mozilla.org stackoverflow.com\n"
//                   "stackoverflow.com reactjs.org\n"
//                   "mozilla.org zoom.us\n"
//                   "disney.com wikipedia.org\n"
//                   "samsung.com ufl.edu\n"
//                   "stackoverflow.com apple.com\n"
//                   "openai.com microsoft.com\n"
//                   "disney.com github.com\n"
//                   "wikipedia.org weather.com\n"
//                   "python.org aman.com\n"
//                   "instagram.com openai.com\n"
//                   "zoom.us wikipedia.org\n"
//                   "wikipedia.org openai.com\n"
//                   "roblox.com stackoverflow.com\n"
//                   "chase.com youtube.com\n"
//                   "roblox.com twitter.com\n"
//                   "github.com google.com\n"
//                   "pcbuildinguf.com ufl.edu\n"
//                   "google.com samsung.com\n"
//                   "weather.com chase.com\n"
//                   "stackoverflow.com python.org\n"
//                   "python.org disney.com\n"
//                   "openai.com disney.com\n"
//                   "stackoverflow.com openai.com\n"
//                   "zoom.us stackoverflow.com\n"
//                   "weather.com stackoverflow.com\n"
//                   "mozilla.org openai.com\n"
//                   "stackoverflow.com aman.com\n"
//                   "mozilla.org microsoft.com\n"
//                   "twitter.com python.org\n"
//                   "mozilla.org apple.com\n"
//                   "mozilla.org twitter.com\n"
//                   "roblox.com python.org\n"
//                   "samsung.com github.com\n"
//                   "wikipedia.org microsoft.com\n"
//                   "stackoverflow.com github.com\n"
//                   "youtube.com stackoverflow.com\n"
//                   "chase.com microsoft.com\n"
//                   "ufl.edu apple.com\n"
//                   "microsoft.com chase.com\n"
//                   "pcbuildinguf.com disney.com\n"
//                   "weather.com pcbuildinguf.com\n"
//                   "reactjs.org chase.com\n"
//                   "apple.com roblox.com\n"
//                   "openai.com apple.com\n"
//                   "apple.com samsung.com\n"
//                   "microsoft.com ufl.edu\n"
//                   "weather.com github.com\n"
//                   "wikipedia.org reactjs.org\n"
//                   "openai.com wikipedia.org\n"
//                   "microsoft.com python.org\n"
//                   "facebook.com youtube.com\n"
//                   "instagram.com roblox.com\n"
//                   "mozilla.org google.com\n"
//                   "ufl.edu pcbuildinguf.com\n"
//                   "pcbuildinguf.com facebook.com\n"
//                   "samsung.com weather.com\n"
//                   "samsung.com stackoverflow.com\n"
//                   "microsoft.com mozilla.org\n"
//                   "google.com instagram.com\n"
//                   "youtube.com pcbuildinguf.com\n"
//                   "reactjs.org openai.com\n"
//                   "zoom.us apple.com\n"
//                   "samsung.com reactjs.org\n"
//                   "zoom.us chase.com\n"
//                   "facebook.com roblox.com\n"
//                   "twitter.com mozilla.org\n"
//                   "facebook.com instagram.com\n"
//                   "pcbuildinguf.com aman.com\n"
//                   "instagram.com google.com\n"
//                   "reactjs.org youtube.com\n"
//                   "weather.com apple.com\n"
//                   "zoom.us disney.com\n"
//                   "instagram.com python.org\n"
//                   "reactjs.org aman.com\n"
//                   "instagram.com weather.com\n"
//                   "reactjs.org disney.com\n"
//                   "zoom.us weather.com\n"
//                   "python.org ufl.edu\n"
//                   "chase.com google.com\n"
//                   "google.com mozilla.org\n"
//                   "microsoft.com openai.com\n"
//                   "roblox.com chase.com\n"
//                   "facebook.com wikipedia.org\n"
//                   "openai.com google.com\n"
//                   "apple.com youtube.com\n"
//                   "twitter.com github.com\n"
//                   "roblox.com reactjs.org\n"
//                   "roblox.com github.com\n"
//                   "reactjs.org google.com\n"
//                   "zoom.us aman.com\n"
//                   "mozilla.org github.com\n"
//                   "python.org instagram.com\n"
//                   "instagram.com stackoverflow.com\n"
//                   "pcbuildinguf.com apple.com\n"
//                   "twitter.com youtube.com\n"
//                   "openai.com mozilla.org\n"
//                   "wikipedia.org youtube.com\n"
//                   "weather.com twitter.com\n"
//                   "google.com microsoft.com\n"
//                   "microsoft.com apple.com\n"
//                   "disney.com python.org\n"
//                   "chase.com wikipedia.org\n"
//                   "google.com wikipedia.org\n"
//                   "python.org roblox.com\n"
//                   "chase.com weather.com\n"
//                   "instagram.com microsoft.com\n"
//                   "roblox.com apple.com\n"
//                   "chase.com facebook.com\n"
//                   "wikipedia.org samsung.com\n"
//                   "youtube.com wikipedia.org\n"
//                   "zoom.us instagram.com\n"
//                   "stackoverflow.com youtube.com\n"
//                   "disney.com mozilla.org\n"
//                   "ufl.edu openai.com\n"
//                   "ufl.edu wikipedia.org\n"
//                   "youtube.com disney.com\n"
//                   "weather.com wikipedia.org\n"
//                   "reactjs.org ufl.edu\n"
//                   "pcbuildinguf.com wikipedia.org\n"
//                   "python.org google.com\n"
//                   "samsung.com python.org\n"
//                   "aman.com python.org\n"
//                   "samsung.com wikipedia.org\n"
//                   "pcbuildinguf.com google.com\n"
//                   "facebook.com apple.com\n"
//                   "aman.com stackoverflow.com\n"
//                   "stackoverflow.com roblox.com\n"
//                   "twitter.com openai.com\n"
//                   "zoom.us mozilla.org\n"
//                   "disney.com samsung.com\n"
//                   "google.com roblox.com\n"
//                   "reactjs.org github.com\n"
//                   "github.com chase.com\n"
//                   "openai.com weather.com\n"
//                   "apple.com wikipedia.org\n"
//                   "pcbuildinguf.com weather.com\n"
//                   "zoom.us google.com\n"
//                   "weather.com aman.com\n"
//                   "apple.com aman.com\n"
//                   "aman.com mozilla.org\n"
//                   "microsoft.com facebook.com\n"
//                   "reactjs.org twitter.com\n"
//                   "zoom.us microsoft.com\n"
//                   "python.org chase.com\n"
//                   "mozilla.org python.org\n"
//                   "apple.com github.com\n"
//                   "chase.com pcbuildinguf.com\n"
//                   "youtube.com instagram.com\n"
//                   "stackoverflow.com google.com\n"
//                   "microsoft.com pcbuildinguf.com\n"
//                   "youtube.com openai.com\n"
//                   "google.com aman.com\n"
//                   "microsoft.com youtube.com\n"
//                   "instagram.com aman.com\n"
//                   "facebook.com aman.com\n"
//                   "mozilla.org facebook.com\n"
//                   "weather.com google.com\n"
//                   "roblox.com zoom.us\n"
//                   "openai.com stackoverflow.com\n"
//                   "roblox.com google.com\n"
//                   "wikipedia.org google.com\n"
//                   "facebook.com microsoft.com\n"
//                   "weather.com microsoft.com\n"
//                   "openai.com roblox.com\n"
//                   "facebook.com chase.com\n"
//                   "ufl.edu aman.com\n"
//                   "disney.com aman.com\n"
//                   "facebook.com pcbuildinguf.com";
//
//    parseInput(graph, input, power_iterations, num_edges);
//    graph.PageRank(power_iterations);
//
//    auto rank = graph.getRoundedPageRanks();
//    REQUIRE(rank["aman.com"] == 0.06f);
//    REQUIRE(rank["apple.com"] == 0.05f);
//    REQUIRE(rank["chase.com"] == 0.04f);
//    REQUIRE(rank["disney.com"] == 0.02f);
//    REQUIRE(rank["facebook.com"] == 0.03f);
//    REQUIRE(rank["github.com"] == 0.05f);
//    REQUIRE(rank["google.com"] == 0.08f);
//    REQUIRE(rank["instagram.com"] == 0.02f);
//    REQUIRE(rank["microsoft.com"] == 0.05f);
//    REQUIRE(rank["mozilla.org"] == 0.04f);
//    REQUIRE(rank["pcbuildinguf.com"] == 0.03f);
//    REQUIRE(rank["python.org"] == 0.05f);
//    REQUIRE(rank["reactjs.org"] == 0.03f);
//    REQUIRE(rank["roblox.com"] == 0.05f);
//    REQUIRE(rank["samsung.com"] == 0.05f);
//    REQUIRE(rank["stackoverflow.com"] == 0.06f);
//    REQUIRE(rank["twitter.com"] == 0.03f);
//    REQUIRE(rank["ufl.edu"] == 0.04f);
//    REQUIRE(rank["weather.com"] == 0.06f);
//    REQUIRE(rank["wikipedia.org"] == 0.06f);
//    REQUIRE(rank["youtube.com"] == 0.04f);
//    REQUIRE(rank["zoom.us"] == 0.02f);
//}
//
//TEST_CASE("Unique Test 2", "[given]"){
//    AdjacencyList graph;
//    int power_iterations;
//    int num_edges;
//
//    string input = "7 2\n"
//                   "google.com gmail.com\n"
//                   "google.com maps.com\n"
//                   "google.com ufl.edu\n"
//                   "google.com facebook.com\n"
//                   "google.com aman.com\n"
//                   "google.com apple.com\n"
//                   "google.com chase.com";
//
//    parseInput(graph, input, power_iterations, num_edges);
//    graph.PageRank(power_iterations);
//
//    auto rank = graph.getRoundedPageRanks();
//    REQUIRE(rank["aman.com"] == 0.02f);
//    REQUIRE(rank["apple.com"] == 0.02f);
//    REQUIRE(rank["chase.com"] == 0.02f);
//    REQUIRE(rank["facebook.com"] == 0.02f);
//    REQUIRE(rank["gmail.com"] == 0.02f);
//    REQUIRE(rank["google.com"] == 0.00f);
//    REQUIRE(rank["maps.com"] == 0.02f);
//    REQUIRE(rank["ufl.edu"] == 0.02f);
//}
//
//TEST_CASE("Unique Test 3", "[given]"){
//    AdjacencyList graph;
//    int power_iterations;
//    int num_edges;
//
//    string input = "7 2\n"
//                   "gmail.com google.com\n"
//                   "maps.com google.com\n"
//                   "ufl.edu google.com\n"
//                   "facebook.com google.com\n"
//                   "aman.com google.com\n"
//                   "apple.com google.com\n"
//                   "chase.com google.com";
//
//    parseInput(graph, input, power_iterations, num_edges);
//    graph.PageRank(power_iterations);
//
//    auto rank = graph.getRoundedPageRanks();
//    REQUIRE(rank["aman.com"] == 0.00f);
//    REQUIRE(rank["apple.com"] == 0.00f);
//    REQUIRE(rank["chase.com"] == 0.00f);
//    REQUIRE(rank["facebook.com"] == 0.00f);
//    REQUIRE(rank["gmail.com"] == 0.00f);
//    REQUIRE(rank["google.com"] == 0.88f);
//    REQUIRE(rank["maps.com"] == 0.00f);
//    REQUIRE(rank["ufl.edu"] == 0.00f);
//}
//
//TEST_CASE("Unique Test 4", "[given]"){
//    AdjacencyList graph;
//    int power_iterations;
//    int num_edges;
//
//    string input = "51 8\n"
//                   "wikipedia.org facebook.com\n"
//                   "apple.com getbootstrap.com\n"
//                   "weather.com instagram.com\n"
//                   "aman.com chase.com\n"
//                   "python.org getbootstrap.com\n"
//                   "python.org wikipedia.org\n"
//                   "youtube.com getbootstrap.com\n"
//                   "wikipedia.org python.org\n"
//                   "twitter.com github.com\n"
//                   "weather.com getbootstrap.com\n"
//                   "apple.com stackoverflow.com\n"
//                   "google.com youtube.com\n"
//                   "roblox.com github.com\n"
//                   "apple.com google.com\n"
//                   "github.com wikipedia.org\n"
//                   "weather.com chase.com\n"
//                   "stackoverflow.com python.org\n"
//                   "twitter.com aman.com\n"
//                   "twitter.com chase.com\n"
//                   "roblox.com getbootstrap.com\n"
//                   "youtube.com wikipedia.org\n"
//                   "github.com python.org\n"
//                   "apple.com instagram.com\n"
//                   "stackoverflow.com getbootstrap.com\n"
//                   "youtube.com stackoverflow.com\n"
//                   "chase.com weather.com\n"
//                   "google.com twitter.com\n"
//                   "github.com stackoverflow.com\n"
//                   "facebook.com weather.com\n"
//                   "youtube.com aman.com\n"
//                   "github.com twitter.com\n"
//                   "weather.com apple.com\n"
//                   "facebook.com wikipedia.org\n"
//                   "chase.com roblox.com\n"
//                   "wikipedia.org apple.com\n"
//                   "facebook.com python.org\n"
//                   "twitter.com google.com\n"
//                   "twitter.com youtube.com\n"
//                   "getbootstrap.com google.com\n"
//                   "chase.com google.com\n"
//                   "github.com weather.com\n"
//                   "github.com roblox.com\n"
//                   "instagram.com facebook.com\n"
//                   "weather.com stackoverflow.com\n"
//                   "python.org apple.com\n"
//                   "youtube.com python.org\n"
//                   "instagram.com roblox.com\n"
//                   "aman.com apple.com\n"
//                   "google.com chase.com\n"
//                   "roblox.com stackoverflow.com\n"
//                   "twitter.com weather.com";
//
//    parseInput(graph, input, power_iterations, num_edges);
//    graph.PageRank(power_iterations);
//
//    auto rank = graph.getRoundedPageRanks();
//    REQUIRE(rank["aman.com"] == 0.02f);
//    REQUIRE(rank["apple.com"] == 0.07f);
//    REQUIRE(rank["chase.com"] == 0.09f);
//    REQUIRE(rank["facebook.com"] == 0.03f);
//    REQUIRE(rank["getbootstrap.com"] == 0.12f);
//    REQUIRE(rank["github.com"] == 0.03f);
//    REQUIRE(rank["google.com"] == 0.18f);
//    REQUIRE(rank["instagram.com"] == 0.03f);
//    REQUIRE(rank["python.org"] == 0.08f);
//    REQUIRE(rank["roblox.com"] == 0.05f);
//    REQUIRE(rank["stackoverflow.com"] == 0.06f);
//    REQUIRE(rank["twitter.com"] == 0.06f);
//    REQUIRE(rank["weather.com"] == 0.06f);
//    REQUIRE(rank["wikipedia.org"] == 0.06f);
//    REQUIRE(rank["youtube.com"] == 0.07f);
//
//}
//
//TEST_CASE("Unique Test 5", "[given]"){
//    AdjacencyList graph;
//    int power_iterations;
//    int num_edges;
//
//    string input = "10 15\n"
//                   "disney.com youtube.com\n"
//                   "ufl.edu weather.com\n"
//                   "roblox.com reactjs.org\n"
//                   "openai.com google.com\n"
//                   "google.com openai.com\n"
//                   "microsoft.com roblox.com\n"
//                   "reactjs.org aman.com\n"
//                   "roblox.com github.com\n"
//                   "getbootstrap.com microsoft.com\n"
//                   "reactjs.org getbootstrap.com";
//
//    parseInput(graph, input, power_iterations, num_edges);
//    graph.PageRank(power_iterations);
//
//    auto rank = graph.getRoundedPageRanks();
//    REQUIRE(rank["aman.com"] == 0.00f);
//    REQUIRE(rank["disney.com"] == 0.00f);
//    REQUIRE(rank["getbootstrap.com"] == 0.00f);
//    REQUIRE(rank["github.com"] == 0.00f);
//    REQUIRE(rank["google.com"] == 0.08f);
//    REQUIRE(rank["microsoft.com"] == 0.00f);
//    REQUIRE(rank["openai.com"] == 0.08f);
//    REQUIRE(rank["reactjs.org"] == 0.00f);
//    REQUIRE(rank["roblox.com"] == 0.00f);
//    REQUIRE(rank["ufl.edu"] == 0.00f);
//    REQUIRE(rank["weather.com"] == 0.00f);
//    REQUIRE(rank["youtube.com"] == 0.00f);
//}
//
//TEST_CASE("Unique Test 6", "[given]"){
//    AdjacencyList graph;
//    int power_iterations;
//    int num_edges;
//
//    string input = "200 14\n"
//                   "instagram.com facebook.com\n"
//                   "python.org openai.com\n"
//                   "weather.com disney.com\n"
//                   "python.org stackoverflow.com\n"
//                   "google.com ufl.edu\n"
//                   "wikipedia.org pcbuildinguf.com\n"
//                   "aman.com twitter.com\n"
//                   "mozilla.org pcbuildinguf.com\n"
//                   "instagram.com python.org\n"
//                   "twitter.com stackoverflow.com\n"
//                   "weather.com stackoverflow.com\n"
//                   "roblox.com aman.com\n"
//                   "instagram.com openai.com\n"
//                   "samsung.com aman.com\n"
//                   "pcbuildinguf.com weather.com\n"
//                   "python.org chase.com\n"
//                   "youtube.com weather.com\n"
//                   "google.com twitter.com\n"
//                   "youtube.com stackoverflow.com\n"
//                   "samsung.com getbootstrap.com\n"
//                   "microsoft.com wikipedia.org\n"
//                   "stackoverflow.com microsoft.com\n"
//                   "chase.com twitter.com\n"
//                   "weather.com getbootstrap.com\n"
//                   "weather.com roblox.com\n"
//                   "instagram.com disney.com\n"
//                   "chase.com zoom.us\n"
//                   "pcbuildinguf.com apple.com\n"
//                   "apple.com google.com\n"
//                   "disney.com zoom.us\n"
//                   "disney.com github.com\n"
//                   "instagram.com aman.com\n"
//                   "roblox.com python.org\n"
//                   "wikipedia.org mozilla.org\n"
//                   "microsoft.com apple.com\n"
//                   "twitter.com openai.com\n"
//                   "pcbuildinguf.com youtube.com\n"
//                   "microsoft.com python.org\n"
//                   "getbootstrap.com weather.com\n"
//                   "weather.com zoom.us\n"
//                   "disney.com apple.com\n"
//                   "microsoft.com zoom.us\n"
//                   "stackoverflow.com weather.com\n"
//                   "getbootstrap.com wikipedia.org\n"
//                   "google.com openai.com\n"
//                   "roblox.com openai.com\n"
//                   "roblox.com twitter.com\n"
//                   "twitter.com apple.com\n"
//                   "chase.com stackoverflow.com\n"
//                   "openai.com facebook.com\n"
//                   "samsung.com stackoverflow.com\n"
//                   "youtube.com github.com\n"
//                   "google.com microsoft.com\n"
//                   "instagram.com pcbuildinguf.com\n"
//                   "stackoverflow.com zoom.us\n"
//                   "disney.com roblox.com\n"
//                   "google.com getbootstrap.com\n"
//                   "roblox.com weather.com\n"
//                   "pcbuildinguf.com github.com\n"
//                   "twitter.com disney.com\n"
//                   "pcbuildinguf.com twitter.com\n"
//                   "twitter.com samsung.com\n"
//                   "wikipedia.org openai.com\n"
//                   "ufl.edu github.com\n"
//                   "openai.com roblox.com\n"
//                   "samsung.com apple.com\n"
//                   "roblox.com pcbuildinguf.com\n"
//                   "chase.com wikipedia.org\n"
//                   "chase.com disney.com\n"
//                   "roblox.com chase.com\n"
//                   "instagram.com zoom.us\n"
//                   "zoom.us roblox.com\n"
//                   "google.com zoom.us\n"
//                   "ufl.edu samsung.com\n"
//                   "zoom.us microsoft.com\n"
//                   "github.com twitter.com\n"
//                   "samsung.com chase.com\n"
//                   "chase.com getbootstrap.com\n"
//                   "weather.com openai.com\n"
//                   "facebook.com openai.com\n"
//                   "chase.com microsoft.com\n"
//                   "weather.com wikipedia.org\n"
//                   "twitter.com instagram.com\n"
//                   "google.com facebook.com\n"
//                   "getbootstrap.com disney.com\n"
//                   "ufl.edu aman.com\n"
//                   "getbootstrap.com python.org\n"
//                   "mozilla.org google.com\n"
//                   "apple.com github.com\n"
//                   "chase.com youtube.com\n"
//                   "youtube.com microsoft.com\n"
//                   "mozilla.org apple.com\n"
//                   "twitter.com github.com\n"
//                   "zoom.us youtube.com\n"
//                   "ufl.edu instagram.com\n"
//                   "github.com google.com\n"
//                   "apple.com aman.com\n"
//                   "apple.com twitter.com\n"
//                   "apple.com roblox.com\n"
//                   "getbootstrap.com microsoft.com\n"
//                   "ufl.edu zoom.us\n"
//                   "microsoft.com google.com\n"
//                   "openai.com disney.com\n"
//                   "ufl.edu python.org\n"
//                   "facebook.com zoom.us\n"
//                   "ufl.edu microsoft.com\n"
//                   "openai.com instagram.com\n"
//                   "weather.com ufl.edu\n"
//                   "disney.com samsung.com\n"
//                   "openai.com getbootstrap.com\n"
//                   "ufl.edu apple.com\n"
//                   "openai.com wikipedia.org\n"
//                   "zoom.us chase.com\n"
//                   "twitter.com youtube.com\n"
//                   "pcbuildinguf.com samsung.com\n"
//                   "chase.com roblox.com\n"
//                   "pcbuildinguf.com wikipedia.org\n"
//                   "apple.com getbootstrap.com\n"
//                   "youtube.com ufl.edu\n"
//                   "microsoft.com aman.com\n"
//                   "roblox.com stackoverflow.com\n"
//                   "samsung.com twitter.com\n"
//                   "youtube.com aman.com\n"
//                   "aman.com facebook.com\n"
//                   "ufl.edu openai.com\n"
//                   "samsung.com disney.com\n"
//                   "github.com samsung.com\n"
//                   "roblox.com google.com\n"
//                   "mozilla.org facebook.com\n"
//                   "microsoft.com openai.com\n"
//                   "ufl.edu mozilla.org\n"
//                   "microsoft.com facebook.com\n"
//                   "github.com stackoverflow.com\n"
//                   "wikipedia.org weather.com\n"
//                   "stackoverflow.com chase.com\n"
//                   "mozilla.org aman.com\n"
//                   "youtube.com facebook.com\n"
//                   "apple.com python.org\n"
//                   "samsung.com ufl.edu\n"
//                   "stackoverflow.com openai.com\n"
//                   "github.com weather.com\n"
//                   "wikipedia.org instagram.com\n"
//                   "disney.com ufl.edu\n"
//                   "instagram.com wikipedia.org\n"
//                   "youtube.com twitter.com\n"
//                   "facebook.com chase.com\n"
//                   "chase.com openai.com\n"
//                   "twitter.com wikipedia.org\n"
//                   "github.com openai.com\n"
//                   "github.com disney.com\n"
//                   "facebook.com instagram.com\n"
//                   "zoom.us aman.com\n"
//                   "roblox.com getbootstrap.com\n"
//                   "weather.com aman.com\n"
//                   "twitter.com ufl.edu\n"
//                   "python.org apple.com\n"
//                   "chase.com instagram.com\n"
//                   "mozilla.org weather.com\n"
//                   "wikipedia.org youtube.com\n"
//                   "google.com chase.com\n"
//                   "ufl.edu chase.com\n"
//                   "getbootstrap.com pcbuildinguf.com\n"
//                   "wikipedia.org disney.com\n"
//                   "github.com pcbuildinguf.com\n"
//                   "python.org mozilla.org\n"
//                   "mozilla.org microsoft.com\n"
//                   "disney.com aman.com\n"
//                   "pcbuildinguf.com stackoverflow.com\n"
//                   "microsoft.com pcbuildinguf.com\n"
//                   "chase.com pcbuildinguf.com\n"
//                   "roblox.com microsoft.com\n"
//                   "microsoft.com twitter.com\n"
//                   "disney.com youtube.com\n"
//                   "openai.com youtube.com\n"
//                   "roblox.com apple.com\n"
//                   "microsoft.com chase.com\n"
//                   "weather.com mozilla.org\n"
//                   "microsoft.com samsung.com\n"
//                   "openai.com twitter.com\n"
//                   "aman.com youtube.com\n"
//                   "mozilla.org zoom.us\n"
//                   "microsoft.com youtube.com\n"
//                   "instagram.com github.com\n"
//                   "chase.com weather.com\n"
//                   "samsung.com google.com\n"
//                   "wikipedia.org getbootstrap.com\n"
//                   "mozilla.org github.com\n"
//                   "twitter.com mozilla.org\n"
//                   "twitter.com aman.com\n"
//                   "facebook.com pcbuildinguf.com\n"
//                   "disney.com stackoverflow.com\n"
//                   "chase.com aman.com\n"
//                   "wikipedia.org aman.com\n"
//                   "zoom.us twitter.com\n"
//                   "getbootstrap.com aman.com\n"
//                   "ufl.edu twitter.com\n"
//                   "twitter.com facebook.com\n"
//                   "ufl.edu pcbuildinguf.com\n"
//                   "disney.com microsoft.com\n"
//                   "stackoverflow.com pcbuildinguf.com";
//
//    parseInput(graph, input, power_iterations, num_edges);
//    graph.PageRank(power_iterations);
//
//    string expectedOutput = "aman.com 0.07\n"
//                            "apple.com 0.04\n"
//                            "chase.com 0.05\n"
//                            "disney.com 0.04\n"
//                            "facebook.com 0.06\n"
//                            "getbootstrap.com 0.03\n"
//                            "github.com 0.04\n"
//                            "google.com 0.02\n"
//                            "instagram.com 0.04\n"
//                            "microsoft.com 0.05\n"
//                            "mozilla.org 0.02\n"
//                            "openai.com 0.06\n"
//                            "pcbuildinguf.com 0.05\n"
//                            "python.org 0.02\n"
//                            "roblox.com 0.03\n"
//                            "samsung.com 0.03\n"
//                            "stackoverflow.com 0.05\n"
//                            "twitter.com 0.08\n"
//                            "ufl.edu 0.03\n"
//                            "weather.com 0.05\n"
//                            "wikipedia.org 0.04\n"
//                            "youtube.com 0.07\n"
//                            "zoom.us 0.05";
//
//    REQUIRE(checkTest(graph, expectedOutput) == true);
//}
//
//TEST_CASE("Unique Test 7", "[given]"){
//    AdjacencyList graph;
//    int power_iterations;
//    int num_edges;
//
//    string input = "3 15\n"
//                   "getbootstrap.com openai.com\n"
//                   "openai.com getbootstrap.com\n"
//                   "getbootstrap.com ufl.edu";
//
//    parseInput(graph, input, power_iterations, num_edges);
//    graph.PageRank(power_iterations);
//
//    string expectedOutput = "getbootstrap.com 0.00\n"
//                            "openai.com 0.00\n"
//                            "ufl.edu 0.00";
//
//    REQUIRE(checkTest(graph, expectedOutput) == true);
//}
//
//TEST_CASE("Unique Test 8", "[given]"){
//    AdjacencyList graph;
//    int power_iterations;
//    int num_edges;
//
//    string input = "172 7\n"
//                   "ufl.edu wikipedia.org\n"
//                   "reactjs.org microsoft.com\n"
//                   "apple.com zoom.us\n"
//                   "apple.com stackoverflow.com\n"
//                   "github.com zoom.us\n"
//                   "python.org roblox.com\n"
//                   "wikipedia.org zoom.us\n"
//                   "disney.com python.org\n"
//                   "roblox.com zoom.us\n"
//                   "youtube.com chase.com\n"
//                   "youtube.com roblox.com\n"
//                   "twitter.com wikipedia.org\n"
//                   "python.org microsoft.com\n"
//                   "openai.com instagram.com\n"
//                   "python.org github.com\n"
//                   "ufl.edu github.com\n"
//                   "instagram.com disney.com\n"
//                   "instagram.com twitter.com\n"
//                   "mozilla.org github.com\n"
//                   "weather.com mozilla.org\n"
//                   "youtube.com python.org\n"
//                   "github.com mozilla.org\n"
//                   "roblox.com twitter.com\n"
//                   "mozilla.org samsung.com\n"
//                   "microsoft.com ufl.edu\n"
//                   "instagram.com roblox.com\n"
//                   "chase.com reactjs.org\n"
//                   "apple.com mozilla.org\n"
//                   "microsoft.com facebook.com\n"
//                   "disney.com youtube.com\n"
//                   "microsoft.com twitter.com\n"
//                   "chase.com apple.com\n"
//                   "roblox.com youtube.com\n"
//                   "ufl.edu weather.com\n"
//                   "ufl.edu reactjs.org\n"
//                   "chase.com github.com\n"
//                   "youtube.com wikipedia.org\n"
//                   "roblox.com weather.com\n"
//                   "stackoverflow.com zoom.us\n"
//                   "weather.com python.org\n"
//                   "facebook.com samsung.com\n"
//                   "samsung.com weather.com\n"
//                   "microsoft.com mozilla.org\n"
//                   "python.org zoom.us\n"
//                   "github.com roblox.com\n"
//                   "microsoft.com disney.com\n"
//                   "microsoft.com instagram.com\n"
//                   "github.com facebook.com\n"
//                   "chase.com openai.com\n"
//                   "samsung.com youtube.com\n"
//                   "python.org stackoverflow.com\n"
//                   "chase.com python.org\n"
//                   "weather.com wikipedia.org\n"
//                   "samsung.com github.com\n"
//                   "twitter.com disney.com\n"
//                   "zoom.us roblox.com\n"
//                   "samsung.com mozilla.org\n"
//                   "roblox.com stackoverflow.com\n"
//                   "github.com reactjs.org\n"
//                   "facebook.com reactjs.org\n"
//                   "facebook.com twitter.com\n"
//                   "instagram.com github.com\n"
//                   "roblox.com mozilla.org\n"
//                   "python.org chase.com\n"
//                   "twitter.com roblox.com\n"
//                   "disney.com twitter.com\n"
//                   "reactjs.org python.org\n"
//                   "openai.com wikipedia.org\n"
//                   "zoom.us microsoft.com\n"
//                   "reactjs.org wikipedia.org\n"
//                   "disney.com reactjs.org\n"
//                   "github.com weather.com\n"
//                   "openai.com samsung.com\n"
//                   "youtube.com facebook.com\n"
//                   "github.com openai.com\n"
//                   "apple.com weather.com\n"
//                   "disney.com apple.com\n"
//                   "instagram.com reactjs.org\n"
//                   "disney.com chase.com\n"
//                   "stackoverflow.com ufl.edu\n"
//                   "instagram.com weather.com\n"
//                   "facebook.com roblox.com\n"
//                   "wikipedia.org github.com\n"
//                   "twitter.com python.org\n"
//                   "python.org instagram.com\n"
//                   "mozilla.org instagram.com\n"
//                   "youtube.com openai.com\n"
//                   "samsung.com chase.com\n"
//                   "chase.com samsung.com\n"
//                   "roblox.com instagram.com\n"
//                   "twitter.com mozilla.org\n"
//                   "github.com samsung.com\n"
//                   "reactjs.org stackoverflow.com\n"
//                   "reactjs.org twitter.com\n"
//                   "reactjs.org chase.com\n"
//                   "wikipedia.org samsung.com\n"
//                   "facebook.com wikipedia.org\n"
//                   "python.org samsung.com\n"
//                   "wikipedia.org disney.com\n"
//                   "github.com twitter.com\n"
//                   "twitter.com instagram.com\n"
//                   "wikipedia.org youtube.com\n"
//                   "openai.com youtube.com\n"
//                   "ufl.edu microsoft.com\n"
//                   "mozilla.org apple.com\n"
//                   "instagram.com facebook.com\n"
//                   "weather.com apple.com\n"
//                   "mozilla.org roblox.com\n"
//                   "python.org ufl.edu\n"
//                   "ufl.edu zoom.us\n"
//                   "disney.com microsoft.com\n"
//                   "stackoverflow.com disney.com\n"
//                   "ufl.edu openai.com\n"
//                   "roblox.com disney.com\n"
//                   "samsung.com wikipedia.org\n"
//                   "apple.com wikipedia.org\n"
//                   "stackoverflow.com apple.com\n"
//                   "python.org apple.com\n"
//                   "wikipedia.org twitter.com\n"
//                   "twitter.com facebook.com\n"
//                   "apple.com instagram.com\n"
//                   "stackoverflow.com microsoft.com\n"
//                   "microsoft.com python.org\n"
//                   "openai.com microsoft.com\n"
//                   "samsung.com instagram.com\n"
//                   "disney.com stackoverflow.com\n"
//                   "facebook.com apple.com\n"
//                   "facebook.com youtube.com\n"
//                   "samsung.com stackoverflow.com\n"
//                   "ufl.edu facebook.com\n"
//                   "mozilla.org facebook.com\n"
//                   "stackoverflow.com youtube.com\n"
//                   "weather.com microsoft.com\n"
//                   "openai.com stackoverflow.com\n"
//                   "wikipedia.org instagram.com\n"
//                   "github.com wikipedia.org\n"
//                   "ufl.edu twitter.com\n"
//                   "wikipedia.org apple.com\n"
//                   "twitter.com github.com\n"
//                   "chase.com facebook.com\n"
//                   "stackoverflow.com github.com\n"
//                   "ufl.edu disney.com\n"
//                   "roblox.com samsung.com\n"
//                   "youtube.com reactjs.org\n"
//                   "facebook.com disney.com\n"
//                   "openai.com github.com\n"
//                   "ufl.edu samsung.com\n"
//                   "github.com chase.com\n"
//                   "reactjs.org facebook.com\n"
//                   "roblox.com ufl.edu\n"
//                   "reactjs.org instagram.com\n"
//                   "facebook.com weather.com\n"
//                   "microsoft.com weather.com\n"
//                   "disney.com weather.com\n"
//                   "roblox.com python.org\n"
//                   "microsoft.com openai.com\n"
//                   "wikipedia.org microsoft.com\n"
//                   "openai.com mozilla.org\n"
//                   "facebook.com ufl.edu\n"
//                   "instagram.com stackoverflow.com\n"
//                   "openai.com ufl.edu\n"
//                   "zoom.us twitter.com\n"
//                   "roblox.com reactjs.org\n"
//                   "weather.com disney.com\n"
//                   "python.org mozilla.org\n"
//                   "twitter.com youtube.com\n"
//                   "youtube.com instagram.com\n"
//                   "ufl.edu chase.com\n"
//                   "stackoverflow.com instagram.com\n"
//                   "reactjs.org zoom.us\n"
//                   "apple.com ufl.edu\n"
//                   "chase.com twitter.com";
//
//    parseInput(graph, input, power_iterations, num_edges);
//    graph.PageRank(power_iterations);
//
//    string expectedOutput = "apple.com 0.05\n"
//                            "chase.com 0.04\n"
//                            "disney.com 0.06\n"
//                            "facebook.com 0.05\n"
//                            "github.com 0.06\n"
//                            "instagram.com 0.07\n"
//                            "microsoft.com 0.06\n"
//                            "mozilla.org 0.05\n"
//                            "openai.com 0.02\n"
//                            "python.org 0.05\n"
//                            "reactjs.org 0.04\n"
//                            "roblox.com 0.06\n"
//                            "samsung.com 0.05\n"
//                            "stackoverflow.com 0.04\n"
//                            "twitter.com 0.07\n"
//                            "ufl.edu 0.04\n"
//                            "weather.com 0.05\n"
//                            "wikipedia.org 0.06\n"
//                            "youtube.com 0.04\n"
//                            "zoom.us 0.04";
//
//    REQUIRE(checkTest(graph, expectedOutput) == true);
//}
//
//TEST_CASE("Unique Test 9", "[given]"){
//    AdjacencyList graph;
//    int power_iterations;
//    int num_edges;
//
//    string input = "239 6\n"
//                   "google.com mozilla.org\n"
//                   "disney.com google.com\n"
//                   "youtube.com reactjs.org\n"
//                   "wikipedia.org mozilla.org\n"
//                   "twitter.com samsung.com\n"
//                   "wikipedia.org reactjs.org\n"
//                   "getbootstrap.com microsoft.com\n"
//                   "mozilla.org aman.com\n"
//                   "github.com getbootstrap.com\n"
//                   "roblox.com wikipedia.org\n"
//                   "ufl.edu aman.com\n"
//                   "wikipedia.org weather.com\n"
//                   "getbootstrap.com apple.com\n"
//                   "roblox.com reactjs.org\n"
//                   "zoom.us pcbuildinguf.com\n"
//                   "facebook.com github.com\n"
//                   "weather.com apple.com\n"
//                   "facebook.com weather.com\n"
//                   "facebook.com wikipedia.org\n"
//                   "reactjs.org weather.com\n"
//                   "weather.com wikipedia.org\n"
//                   "wikipedia.org youtube.com\n"
//                   "mozilla.org roblox.com\n"
//                   "ufl.edu mozilla.org\n"
//                   "disney.com weather.com\n"
//                   "zoom.us openai.com\n"
//                   "reactjs.org ufl.edu\n"
//                   "samsung.com python.org\n"
//                   "mozilla.org instagram.com\n"
//                   "reactjs.org microsoft.com\n"
//                   "openai.com github.com\n"
//                   "ufl.edu wikipedia.org\n"
//                   "youtube.com disney.com\n"
//                   "disney.com twitter.com\n"
//                   "samsung.com github.com\n"
//                   "reactjs.org twitter.com\n"
//                   "chase.com wikipedia.org\n"
//                   "python.org pcbuildinguf.com\n"
//                   "python.org mozilla.org\n"
//                   "disney.com samsung.com\n"
//                   "twitter.com github.com\n"
//                   "weather.com roblox.com\n"
//                   "aman.com weather.com\n"
//                   "getbootstrap.com openai.com\n"
//                   "samsung.com facebook.com\n"
//                   "aman.com google.com\n"
//                   "facebook.com reactjs.org\n"
//                   "twitter.com aman.com\n"
//                   "apple.com weather.com\n"
//                   "microsoft.com pcbuildinguf.com\n"
//                   "wikipedia.org roblox.com\n"
//                   "python.org samsung.com\n"
//                   "samsung.com weather.com\n"
//                   "ufl.edu twitter.com\n"
//                   "roblox.com python.org\n"
//                   "pcbuildinguf.com reactjs.org\n"
//                   "chase.com instagram.com\n"
//                   "instagram.com pcbuildinguf.com\n"
//                   "apple.com youtube.com\n"
//                   "disney.com pcbuildinguf.com\n"
//                   "chase.com apple.com\n"
//                   "weather.com openai.com\n"
//                   "reactjs.org zoom.us\n"
//                   "pcbuildinguf.com roblox.com\n"
//                   "roblox.com aman.com\n"
//                   "reactjs.org pcbuildinguf.com\n"
//                   "chase.com github.com\n"
//                   "apple.com samsung.com\n"
//                   "twitter.com apple.com\n"
//                   "python.org google.com\n"
//                   "zoom.us wikipedia.org\n"
//                   "samsung.com ufl.edu\n"
//                   "samsung.com mozilla.org\n"
//                   "reactjs.org instagram.com\n"
//                   "reactjs.org roblox.com\n"
//                   "weather.com microsoft.com\n"
//                   "python.org disney.com\n"
//                   "getbootstrap.com disney.com\n"
//                   "facebook.com python.org\n"
//                   "getbootstrap.com reactjs.org\n"
//                   "microsoft.com instagram.com\n"
//                   "wikipedia.org pcbuildinguf.com\n"
//                   "chase.com facebook.com\n"
//                   "getbootstrap.com pcbuildinguf.com\n"
//                   "mozilla.org youtube.com\n"
//                   "ufl.edu pcbuildinguf.com\n"
//                   "roblox.com microsoft.com\n"
//                   "roblox.com samsung.com\n"
//                   "chase.com openai.com\n"
//                   "wikipedia.org apple.com\n"
//                   "weather.com samsung.com\n"
//                   "youtube.com github.com\n"
//                   "openai.com chase.com\n"
//                   "microsoft.com chase.com\n"
//                   "zoom.us ufl.edu\n"
//                   "zoom.us getbootstrap.com\n"
//                   "weather.com pcbuildinguf.com\n"
//                   "aman.com zoom.us\n"
//                   "roblox.com zoom.us\n"
//                   "aman.com twitter.com\n"
//                   "openai.com roblox.com\n"
//                   "roblox.com youtube.com\n"
//                   "google.com ufl.edu\n"
//                   "apple.com wikipedia.org\n"
//                   "apple.com facebook.com\n"
//                   "python.org weather.com\n"
//                   "python.org facebook.com\n"
//                   "mozilla.org openai.com\n"
//                   "wikipedia.org github.com\n"
//                   "getbootstrap.com python.org\n"
//                   "zoom.us mozilla.org\n"
//                   "disney.com chase.com\n"
//                   "weather.com facebook.com\n"
//                   "aman.com roblox.com\n"
//                   "chase.com google.com\n"
//                   "aman.com disney.com\n"
//                   "google.com roblox.com\n"
//                   "wikipedia.org instagram.com\n"
//                   "youtube.com pcbuildinguf.com\n"
//                   "github.com facebook.com\n"
//                   "instagram.com wikipedia.org\n"
//                   "apple.com openai.com\n"
//                   "microsoft.com zoom.us\n"
//                   "disney.com instagram.com\n"
//                   "samsung.com openai.com\n"
//                   "disney.com python.org\n"
//                   "twitter.com chase.com\n"
//                   "openai.com mozilla.org\n"
//                   "facebook.com mozilla.org\n"
//                   "weather.com github.com\n"
//                   "reactjs.org getbootstrap.com\n"
//                   "aman.com github.com\n"
//                   "chase.com roblox.com\n"
//                   "instagram.com microsoft.com\n"
//                   "openai.com microsoft.com\n"
//                   "facebook.com pcbuildinguf.com\n"
//                   "aman.com openai.com\n"
//                   "apple.com microsoft.com\n"
//                   "google.com getbootstrap.com\n"
//                   "wikipedia.org microsoft.com\n"
//                   "chase.com reactjs.org\n"
//                   "pcbuildinguf.com getbootstrap.com\n"
//                   "disney.com apple.com\n"
//                   "disney.com microsoft.com\n"
//                   "mozilla.org twitter.com\n"
//                   "getbootstrap.com twitter.com\n"
//                   "microsoft.com python.org\n"
//                   "github.com wikipedia.org\n"
//                   "microsoft.com ufl.edu\n"
//                   "python.org getbootstrap.com\n"
//                   "youtube.com wikipedia.org\n"
//                   "google.com zoom.us\n"
//                   "youtube.com facebook.com\n"
//                   "aman.com youtube.com\n"
//                   "twitter.com reactjs.org\n"
//                   "aman.com chase.com\n"
//                   "microsoft.com reactjs.org\n"
//                   "google.com samsung.com\n"
//                   "openai.com aman.com\n"
//                   "reactjs.org facebook.com\n"
//                   "ufl.edu chase.com\n"
//                   "python.org twitter.com\n"
//                   "google.com openai.com\n"
//                   "samsung.com instagram.com\n"
//                   "ufl.edu getbootstrap.com\n"
//                   "python.org roblox.com\n"
//                   "apple.com pcbuildinguf.com\n"
//                   "google.com disney.com\n"
//                   "roblox.com twitter.com\n"
//                   "instagram.com aman.com\n"
//                   "twitter.com zoom.us\n"
//                   "ufl.edu weather.com\n"
//                   "weather.com python.org\n"
//                   "openai.com youtube.com\n"
//                   "wikipedia.org chase.com\n"
//                   "apple.com aman.com\n"
//                   "openai.com wikipedia.org\n"
//                   "pcbuildinguf.com google.com\n"
//                   "openai.com pcbuildinguf.com\n"
//                   "github.com reactjs.org\n"
//                   "getbootstrap.com chase.com\n"
//                   "instagram.com github.com\n"
//                   "chase.com zoom.us\n"
//                   "youtube.com roblox.com\n"
//                   "pcbuildinguf.com microsoft.com\n"
//                   "openai.com samsung.com\n"
//                   "python.org microsoft.com\n"
//                   "mozilla.org google.com\n"
//                   "microsoft.com facebook.com\n"
//                   "chase.com twitter.com\n"
//                   "apple.com twitter.com\n"
//                   "ufl.edu google.com\n"
//                   "zoom.us disney.com\n"
//                   "github.com chase.com\n"
//                   "pcbuildinguf.com samsung.com\n"
//                   "google.com youtube.com\n"
//                   "reactjs.org google.com\n"
//                   "microsoft.com roblox.com\n"
//                   "pcbuildinguf.com aman.com\n"
//                   "github.com apple.com\n"
//                   "youtube.com instagram.com\n"
//                   "zoom.us weather.com\n"
//                   "apple.com zoom.us\n"
//                   "google.com weather.com\n"
//                   "zoom.us github.com\n"
//                   "microsoft.com wikipedia.org\n"
//                   "zoom.us twitter.com\n"
//                   "roblox.com weather.com\n"
//                   "twitter.com python.org\n"
//                   "google.com instagram.com\n"
//                   "pcbuildinguf.com youtube.com\n"
//                   "youtube.com chase.com\n"
//                   "apple.com chase.com\n"
//                   "facebook.com google.com\n"
//                   "google.com apple.com\n"
//                   "instagram.com youtube.com\n"
//                   "pcbuildinguf.com weather.com\n"
//                   "twitter.com mozilla.org\n"
//                   "openai.com facebook.com\n"
//                   "youtube.com python.org\n"
//                   "disney.com facebook.com\n"
//                   "samsung.com chase.com\n"
//                   "mozilla.org github.com\n"
//                   "reactjs.org github.com\n"
//                   "facebook.com roblox.com\n"
//                   "github.com openai.com\n"
//                   "samsung.com wikipedia.org\n"
//                   "weather.com reactjs.org\n"
//                   "github.com youtube.com\n"
//                   "chase.com ufl.edu\n"
//                   "github.com mozilla.org\n"
//                   "ufl.edu zoom.us\n"
//                   "facebook.com disney.com\n"
//                   "openai.com instagram.com\n"
//                   "python.org wikipedia.org\n"
//                   "github.com microsoft.com\n"
//                   "facebook.com youtube.com\n"
//                   "facebook.com chase.com\n"
//                   "openai.com google.com";
//
//    parseInput(graph, input, power_iterations, num_edges);
//    graph.PageRank(power_iterations);
//
//    string expectedOutput = "aman.com 0.04\n"
//                            "apple.com 0.03\n"
//                            "chase.com 0.05\n"
//                            "disney.com 0.03\n"
//                            "facebook.com 0.04\n"
//                            "getbootstrap.com 0.03\n"
//                            "github.com 0.06\n"
//                            "google.com 0.04\n"
//                            "instagram.com 0.04\n"
//                            "microsoft.com 0.05\n"
//                            "mozilla.org 0.04\n"
//                            "openai.com 0.04\n"
//                            "pcbuildinguf.com 0.06\n"
//                            "python.org 0.04\n"
//                            "reactjs.org 0.05\n"
//                            "roblox.com 0.06\n"
//                            "samsung.com 0.04\n"
//                            "twitter.com 0.04\n"
//                            "ufl.edu 0.02\n"
//                            "weather.com 0.05\n"
//                            "wikipedia.org 0.06\n"
//                            "youtube.com 0.05\n"
//                            "zoom.us 0.04";
//
//    REQUIRE(checkTest(graph, expectedOutput) == true);
//}
//
//TEST_CASE("Unique Test 10", "[given]"){
//    AdjacencyList graph;
//    int power_iterations;
//    int num_edges;
//
//    string input = "1 7\n"
//                   "weather.com mozilla.org";
//
//    parseInput(graph, input, power_iterations, num_edges);
//    graph.PageRank(power_iterations);
//
//    string expectedOutput = "mozilla.org 0.00\n"
//                            "weather.com 0.00";
//
//    REQUIRE(checkTest(graph, expectedOutput) == true);
//}