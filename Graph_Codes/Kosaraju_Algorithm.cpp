#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<stack>
using namespace std;

void dfs(int node, unordered_map<int,bool> &visited, stack<int> &s, unordered_map<int,list<int>> &adj)
{
    visited[node] = true;
    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour, visited,s,adj);
        }
    }
    // topo logic
    s.push(node);
}

void revdfs(int node, unordered_map<int,bool> &visited, unordered_map<int,list<int>> &adj)
{
    visited[node] = true;
    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            revdfs(neighbour, visited,adj);
        }
    }
}

int main(){
    int n= 5;
    int edge = 5;

    vector<pair<int,int>> edges;

    edges.push_back(make_pair(1,0));
    edges.push_back(make_pair(0,2));
    edges.push_back(make_pair(2,1));
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    
    // adj list
    unordered_map<int,list<int>> adj;

    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        //adj[v].push_back(u);
    }

    // TOPOLOGICAL SORT
    stack<int> s;
    unordered_map<int,bool> visited;
    for(int i=0;i<n; i++){
        if(!visited[i]){
            dfs(i,visited,s,adj);
        }
    }

    // create a transpose graph
    unordered_map<int,list<int>> transpose;
    for(int i=0; i<n; i++){
        for(auto neighbour: adj[i]){
            transpose[neighbour].push_back(i);
        }
    }

    // dfs call using ordering
    int count = 0;
    while(!s.empty()){
        int top = s.top();
        s.pop();
        if(!visited[top]){
            count++;
            revdfs(top,visited,transpose);
        }
    }

    return count;

    return 0;
}