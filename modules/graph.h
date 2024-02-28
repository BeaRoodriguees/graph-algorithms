#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>

using namespace std;

struct Edge
{
    int neighbor;
    int weight;
};

class Graph
{
private:
    vector<vector<Edge>> _adjList;
    vector<int> _predecessors;
    vector<int> _parents;
    int _visitCount;
    int _vertexCount;

public:
    Graph(int n);
    void addEdge(int u, int v, int weight);
    int getSize();
    int notVisited(int v);
    void visit(int v);
    void registerParent(int vertex, int parent);
    const vector<Edge> &getVertexEdges(int v);
    void print();
    void printVisited();
    void printParents();
};

#endif