#include<bits/stdc++.h>
using namespace std;

int detect_cycle(vector<vector<int>>adj, int n, int m){
  vector<bool> visited(n+1,false);
  for(int i=1; i<=n; i++){
    stack<pair<int,int>> st;
    st.push({i,-1});
    while(!st.empty()){
      int node = st.top().first;
      int parent = st.top().second;
      st.pop();
      if(visited[node]) continue;
      visited[node] = true;
      for(int nhbd : adj[node]){
        if(visited[nhbd] and nhbd != parent){return 1;}
        if(!visited[nhbd]) {st.push({nhbd,node});}
        }
      
      }
    }
  return 0;
  }

vector<vector<int>> adj;
int main(){
  int n,m; cin >> n >>m;
  adj.assign(n+1,vector<int>());
  for(int i=0; i<m; i++){ 
    int a,b; cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
    }
  cout << detect_cycle(adj,n,m) << endl;
  }
