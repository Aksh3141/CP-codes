#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n; unordered_map<long int , long int> list;
  while(n--){
    long int a,b;
    cin >> a; cin >>b;
    for(long int i =a; i<=b; i++){
      if(list.find(i) != list.end()){list[i] +=1;}
      else
        list[i] =1;
      }
    }
  long int max_val =0;
  for(const auto& pair : list){
    if (pair.second > max_val){max_val = pair.second;}
    }
  cout << max_val <<endl;
  return 0;
  }
