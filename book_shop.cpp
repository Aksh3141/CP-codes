#include<bits/stdc++.h>
using namespace std;

int max_pages(int n, int x, vector<int>price, vector<int>pages){
  vector<int> dp(x+1,0);
  for(int i=0; i<n; i++){
    for(int j=x; j>=price[i]; j--){
      dp[j] = max(dp[j],dp[j-price[i]]+pages[i]);
      }
    }
  return dp[x];
  }


int main(){
  int n,x; cin >> n >> x;
  vector<int> price(n); vector<int>pages(n);
  for(int i=0; i<n; i++)(cin>>price[i]);
  for(int i=0; i<n; i++)(cin>>pages[i]);
  cout << max_pages(n,x,price,pages)<<endl;
  }
