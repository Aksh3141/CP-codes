#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main(){
  int n; cin>>n;
  vector<vector<char>> grid(n, vector<char>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> grid[i][j];
      }
    }
  vector<vector<int>> answer(n,vector<int>(n,0));
  for(int i=0;i<n;i++){
    for(int j=0; j<n;j++){
      if(grid[i][j]=='*'){continue;}
      if(i==0 and j==0){answer[i][j]=1;continue;}
      if(i==0){answer[i][j]=answer[i][j-1];}
      if(j==0){answer[i][j]=answer[i-1][j];}
      if(i>0 and j>0){answer[i][j]=(answer[i-1][j]+answer[i][j-1])%MOD;}
      }
  }
  cout<<answer[n-1][n-1]%MOD<<endl;
  }
