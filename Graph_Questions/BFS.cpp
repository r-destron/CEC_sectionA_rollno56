#include<iostream>
#include<list>
#include<queue>
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
        void BFS(int src){
            queue<int> q;
            vector<bool> visited(V,false);

            q.push(src);
            visited[src]=true;

            list<int>::iterator it;

            int front;
            while(!q.empty()){
                front=q.front();
                cout<<front<<"-->"; 
                q.pop();

                for(it=adj[front].begin(); it!=adj[front].end(); ++it){
                    if(!visited[*it]){
                        visited[*it]=true;
                        q.push(*it);
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
    cout<<"The BFS traversal of the graph starting at node "<<src<<" is :"<<endl;
    g.BFS(src);
    return 0;
}