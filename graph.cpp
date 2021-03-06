#include <iostream>
#include <vector>

using namespace std;

class Graph
{
    public:
        Graph(const vector<int> & , const vector<int> & );
        int numOutgoing(const int ) const;
        const vector<int>& adjacent(int nodeID) const;

    private:
    	vector<int> out, to;
    	int nodes;
};

Graph::Graph(const vector<int> &stars, const vector<int> &ends)
{
	int a, b;
	this->out=stars;
	this->to=ends;

	cout << "coloque numero de nodos: " << endl;
	cin>> b;
	this->nodes=b;
	for (int i=0; i<b; i++){
		cout << "coloque node de salida: " << endl;
		cin >> a;
		out.push_back(a);
		cout << "ahora su nodo de entrada: " << endl;
		cin >> a;
		to.push_back(a);
	}
};

int Graph::numOutgoing(const int nodeID) const
{
	int a=0;

	for (int i=0; i<nodes; i++){
		if (out[i]==nodeID)
			a=a+1;
	}
	return a;
};

const vector<int>& Graph::adjacent(int nodeID) const
{
	static vector<int> a;
	for (int i=0; i<nodes; i++){
		if (out[i]==nodeID)
			a.push_back(to[i]);
	}
	return a;
};

int main()
{
	Graph raf(vector<int> entrada, vector<int> salida);
	return 0;
}
