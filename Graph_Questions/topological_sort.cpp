#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void topologicalSortUtils(vector<int> graph[],vector<bool>& visited, stack<int>&st, int i){
    visited[i]=true;
    for(auto v:graph[i])
    {
        if(!visited[v])
        {
           topologicalSortUtils(graph,visited,st,v);
        }
    } 
    st.push(i);
}

void topologicalSort(vector<int> graph[],int V){
    vector<bool> visited(V,false);
    stack<int> st;

    for(int i=0;i<V;i++){
            if(!visited[i])
                topologicalSortUtils(graph,visited,st,i);
    }
    while(!st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
}

int main(){
    int V,E,s,d;
    cin>>V>>E;
    vector<int> graph[V]; //array of vectors much like a 2d array where the no. of vertices are fixed so that is 
                            //contained in an array but the adjacency may vary which is contained in vectors
    for(int i=0;i<E;i++){
        cin>>s>>d;
        graph[s].push_back(d);
    }
    topologicalSort(graph,V); //only for directed acyclic graphs
}