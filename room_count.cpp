#include<bits/stdc++.h>
using namespace std;
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
void dfs(vector<vector<char>> &grid,int i, int j,int n, int m){
  if(i<0 || j <0 || i>=n || j>=m || grid[i][j]=='#'){return;}
  grid[i][j]='#';
  for(int q=0; q<4; q++){
    dfs(grid,i+dx[q],j+dy[q],n,m);
    }
  }

int main(){
  int n,m;
  cin >> n >>m;
  vector<vector<char>> grid;
  grid.resize(n,vector<char>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){cin >> grid[i][j];}
    }
  int room_count =0;
  for(int i=0; i<n; i++){
    for(int j =0; j<m; j++){
      if(grid[i][j] == '.'){
        dfs(grid,i,j,n,m);
        room_count +=1;
        }
      }
    }
  cout << room_count << endl;
  }
