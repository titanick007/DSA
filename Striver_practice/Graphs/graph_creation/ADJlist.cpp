//storing an adjacency list
//an array of vector<int>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adjlist[n+1];
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    return 0;
}