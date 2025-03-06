#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<pair<int,int>> list;
  while(n--){
    int x,y; cin >>x >>y;
    list.push_back({x,1});
    list.push_back({y,-1});
    }
  sort(list.begin(),list.end());
  int max_cust =0; int current_cust =0;
  for(auto i : list){
    current_cust += i.second;
    if(current_cust > max_cust){max_cust = current_cust;}
    }
  cout << max_cust << endl;
  return 0;
  }
