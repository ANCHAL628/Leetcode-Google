// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       vector<bool>visited(V,false) ;
       vector<int>answer ;
       DFS(answer,V,adj,0,visited) ;
       return answer ;
        // Code here
    }
    void DFS(vector<int>&answer,int V,vector<int>adj[],int currentNode,vector<bool>&visited){
         if(visited[currentNode] == true){
             return ;
         }
         visited[currentNode] = true ;
         answer.push_back(currentNode) ;
         vector<int>neigh = adj[currentNode] ;
         for(auto it : neigh){ 
             DFS(answer,V,adj,it,visited) ;
         } 
         return ;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends