#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,x; cin >> n >> x; vector<int> coins;
  while(n--){
    int a; cin >> a;
    coins.push_back(a);
    }
  vector<int> array(x+1,1e9);
  
  array[0] = 0;
  for(int i =1; i<=x; i++){
    for(int j=0; j<coins.size(); j++){
      if(i>=coins[j]){array[i] = min(array[i],array[i-coins[j]]+1);}
      }
    }
  if (array[x] < 1e9){cout<<array[x]<<endl;}
  else cout << -1 << endl;
  }
