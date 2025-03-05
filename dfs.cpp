#include<bits/stdc++.h>
using namespace std;
int IsCycle(vector<pair<int,int>> graph, int n, int m){
  stack<int> nodes;
  for(int i=1; i<=n; i++){
    
    }
  
  }

int main(){
  int n,m; cin >> n >>m; vector<pair<int,int>> graph;
  for(int i=0; i<m; i++){
    int a,b; cin >> a >> b;
    graph.push_back({a,b});
    }
  cout << IsCycle(graph,n,m) << endl;
  }
