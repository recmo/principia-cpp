#pragma once
#include "fixups.h"
#include "DFG/PropertyMap.h"
#include "DFG/Node.h"

class DataFlowGraph: PropertyMap
{
public:
	DataFlowGraph();
	~DataFlowGraph();
	
	Node* addClosure(int numArgs, int numRets);

	Node* addCall(int numArgs, int numRets);
	Node* addCall(Node* closure);
	
	const vector<Node*>& nodes() const { return _nodes; }
	vector<Node*>& nodes() { return _nodes; }
	
private:
	vector<Node*> _nodes;
};


