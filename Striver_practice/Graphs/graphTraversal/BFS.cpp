#include <bits/stdc++.h>
using namespace std;

vector<int> BFSofGraph(int n,vector<int> graph[]){
    int visited[n]={0};
    queue <int> q;
    q.push(1);      // starting node is 1
    vector<int> traversal;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        visited[node]=1;
        traversal.push_back(node);
        for(int i=0;i<graph[node].size();++i){
            if(visited[graph[node][i]]==0){
                q.push(graph[node][i]);
                visited[graph[node][i]]=1;
            }
        }
    }
    return traversal;
}
int main(){
    // Initialize the array of vectors
   // Initialize the array of vectors
    vector<int> arr[6];

    // Define the graph
    arr[0].push_back(1);
    arr[1].push_back(0);
    arr[1].push_back(3);
    arr[1].push_back(4);
    arr[2].push_back(4);
    arr[2].push_back(5);
    arr[3].push_back(1);
    arr[4].push_back(1);
    arr[4].push_back(2);
    arr[5].push_back(2);


    vector<int> bfs=BFSofGraph(6,arr);
    for(int i=0;i<bfs.size();++i)cout<<bfs[i]<<" ";
    cout<<endl;
    //visited array
    return 0;
}