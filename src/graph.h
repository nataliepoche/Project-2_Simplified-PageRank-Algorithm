#include <iostream>
#include <map>
#include <vector>
#include<unordered_map>
#include <string>
#include <iomanip>
using namespace std;


class AdjacencyList{
private: // Variables to initialize
    unordered_map<string, unsigned int> outDegree; // Stores out degree connection (from->to)
    unordered_map<string, vector<string>> inDegree; // Stores in degree connection (to -> from (out degree))
    map<string, float> pageRank; // Stores website and rank (initial rank is -> website : 1/|V|)

public: // helper functions needed in algorithm

    // Returns number of unique vertices in |V| graph
    int getVertices(){

        return inDegree.size();

    }

    // Initialize page rank to 1/|V|
    void initializePageRank(){

        // Iterator to go through each vertex
        for(auto &vertex : inDegree){
            pageRank[vertex.first] = 1.00f / (float) getVertices();
        }

    }

    // Prints page ranks
    void printPageRanks(){

        // Iterator go through each vertex
        map<string, float>::iterator vertex;

        for(vertex = pageRank.begin(); vertex != pageRank.end(); vertex++){
            cout << vertex->first << " " << fixed << setprecision(2) << vertex->second << endl;
        }

    }

    void insertEdge(string &from, string &to){

        if(outDegree.find(from) == outDegree.end()){
            outDegree[from] = 1;
        }
        else{
            outDegree[from]++;
        }

        inDegree[to].push_back(from);

        // Add (from key) with empty value into graph if not there
        if(outDegree.find(to) == outDegree.end()){
            outDegree[to] = 0;
        }

        // Add (to) key with empty value into graph if not there
        if(inDegree.find(from) == inDegree.end()){
            inDegree[from] = {};
        }

    }

    // prints PageRank of all pages after p powerIterations in ascending alphabetical order of webpages and rounding rank to two decimal places
    void PageRank(int power_iteration){
        // initialize pageRank to 1/|V|
        initializePageRank();

        // Temporary rank to hold old ranks
        map<string, float> newPageRank;

        // find pageRank of each website
        for(int i = 1; i < power_iteration; i++){

            // Temporary rank to hold old ranks
            newPageRank = pageRank;

            // find rank of each webpage
            for(auto &webpage : inDegree){

                float sum = 0.00f; // Sum of result

                // Calculate rank for each page

                for(auto &link : webpage.second){

                    // Sum - (1 / outDegree count of j) * pageRank of i
                    sum += (1.00f / (float)outDegree.find(link)->second) * pageRank[link];
                }

                // update pageRank
                newPageRank[webpage.first] = sum;
            }

            pageRank = newPageRank;
        }
        printPageRanks(); // print pageRanks
    }

    map<string, float> getRoundedPageRanks(){

        map<string, float> roundedPageRanks;

        // Goes through each item in pageRank map<string, float>
        for(auto &entry : pageRank){
            ostringstream oss;

            // sets oss variable to a float value with 2 decimal places
            oss << fixed << setprecision(2) << entry.second;

            // Adjusts map entry to have the rounded number
            roundedPageRanks[entry.first] = stof(oss.str());
        }

        return roundedPageRanks; // returns rounded pageRank map
    }
};