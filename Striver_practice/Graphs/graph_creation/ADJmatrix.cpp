//storing a graph in an adjacency matrix

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;    // n is number of nodes and m is number of edges
    cin>>n>>m;
    int adj[n+1][n+1];
    int n1,n2;
    for(int i=0;i<m;++i){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    return 0;
}