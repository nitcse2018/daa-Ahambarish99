//This is depth first search algorithm:

#include<iostream>
#include<list>

using namespace std;

// This class represents a directed graph using
// adjacency list representation
class graph
{
	int V; // No. of vertices

  void DFSUtil(int v, bool visited[]);     // It is a recrsive function used by DFS
	// Pointer to an array containing adjacency
	// lists
	list<int> *adj;
public:
	graph(int V); // Constructor

	// function to add an edge to graph
	void addEdge(int v, int w);

	// prints BFS traversal from a given source s
  void DFS(int s);
};

  graph::graph(int V)
  {
    this->V = V;
    adj = new list<int>[V];
  }

  void graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void graph::DFSUtil(int v, bool visited[])
{
  //Mark the current node as visited and print it
  visited[v] = true;
  cout<< v<< " ";

  //Recur for all the vertices adjacent to this vertex
  list<int>::iterator i;
  for (i= adj[v].begin(); i!=adj[v].end(); ++i)
  if (!visited[*i])
    DFSUtil(*i, visited);
}

//DFS traversal of the vertices reachable from v.
//It uses recursive DFSUtil()

void graph::DFS(int v)
{

  //Mark all as not visited
  bool *visited = new bool[V];
  for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call DFSUtil recursive function
    DFSUtil(v, visited);
}

int main()
{
    // Create a graph given in the above diagram
    graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);

    return 0;
}
