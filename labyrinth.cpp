#include<bits/stdc++.h>
using namespace std;
int n,m;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};

vector<vector<char>> grid;
struct Cell{int x,y;};


void bfs(vector<vector<char>> &grid, int n, int m, pair<int,int>start, pair<int,int>end){
  queue<Cell> q;
  vector<vector<int>> dist(n,vector<int>(m,-1));
  vector<vector<char>> dir(n,vector<char>(m));
  vector<vector<Cell>> parent(n,vector<Cell>(m));
  q.push({start.first,start.second});
  dist[start.first][start.second] = 0;
  while(!q.empty()){
    Cell curr = q.front();
    q.pop();
    
    if(curr.x == end.first && curr.y == end.second){
      string path = "";
      Cell trace = {end.first,end.second};
      while(trace.x != start.first || trace.y !=start.second){
        path += dir[trace.x][trace.y];
        trace = parent[trace.x][trace.y];+
        }
      reverse(path.begin(), path.end());
      cout << "YES" << endl;
      cout << path.length() << endl;
      cout << path << endl;
      return;
      }
    
    for(int i=0; i<4; i++){
      int nx = curr.x+dx[i];
      int ny = curr.y+dy[i];
      
      if(nx>=0 and ny>=0 and nx < n and ny < m and grid[nx][ny] != '#' and dist[nx][ny]==-1){
        q.push({nx,ny});
        dist[nx][ny] = dist[curr.x][curr.y] + 1;
        parent[nx][ny] = curr;
        dir[nx][ny] = (i==0 ? 'L' : i==1 ? 'R' : i ==2 ? 'U' : 'D');
        }
      }
      
    }
  cout << "NO" << endl;
  
  }


int main(){
  cin >> n >> m;
  grid.assign(n, vector<char>(m));
  pair<int,int> start,end;
  for(int i =0; i<n; i++){
    for(int j=0;j<m; j++){
      cin >> grid[i][j];
      if(grid[i][j]=='A'){start={i,j};}
      if(grid[i][j]=='B'){end={i,j};}
      }
    }
  bfs(grid,n,m,start,end);
  }
