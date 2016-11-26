#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

using namespace std;

class Graph
{
    public:
        Graph(const vector<int> & , const vector<int> & );
        int numOutgoing(const int nodeID);
        const vector<int> adjacent(const int nodeID) const;

    private:
};

#endif // GRAPH_H
