#include<iostream>
#include<list>
#include<stack>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    public:
        Graph(int V){
            this->V=V;
            adj=new list<int>[V];
        }
        void addEdge(int V,int W){
            adj[V].push_back(W); //add W node to V's list
        }
        void DFS(int src){
            stack<int> s;
			vector<bool> visited(V,false);

			s.push(src);
			visited[src]=true;

			list<int>::iterator it;

			int top;
			while(!s.empty()){
				top=s.top();
				cout<<top<<"-->";
				s.pop();

				for(it=adj[top].begin();it!=adj[top].end();++it){
					if(!visited[*it]){
						visited[*it]=true;
						s.push(*it);
					}
				}

			}
        }
};

int main(){

    int V,E;    //no. of vertices and edges
    int x,y;   //for node names
    int src=0;
    cout<<"Enter no. of vertices and edges";
    cin>>V>>E;
    Graph g(V);
    cout<<"ENter edges"<<endl;
    for(int i=0;i<E;i++){
        cin>>x>>y;
        g.addEdge(x,y);
    }
    cout<<"The DFS traversal of the graph starting at node "<<src<<" is :"<<endl;
    g.DFS(src);
    return 0;
}