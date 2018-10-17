#include <cstdlib>

#include "graph.h"
using namespace std;

int main(){

	Graph *g=new Graph(10);
	g->addEdge(0,1);
	g->addEdge(0,2);
	g->addEdge(0,3);
	g->addEdge(3,4);
	g->addEdge(3,5);
	g->addEdge(3,6);
	g->addEdge(3,7);
	g->addEdge(3,8);
	g->addEdge(3,9);
	g->BFS(0);

	cout<<g->get_v();
	// for(int i=0;i<g->get_v();i++)
	// {
	// 	cout<<(g->get_distance())[i]<<" ";
	// }
	return(0);
}