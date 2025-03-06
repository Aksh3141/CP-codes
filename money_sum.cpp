#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >>t;
  cin.ignore();
  while(t--){
    string line;
    getline(cin,line);
    stringstream ss(line);
    vector<int> array; int num;
    while(ss >> num){
      array.push_back(num);}
    set<int> possible_sums;
    possible_sums.insert(0);
    for(int coin:array){
      set<int> new_sums;
      for(int s : possible_sums){new_sums.insert(s+coin);}
      possible_sums.insert(new_sums.begin(), new_sums.end());
      }
    
    possible_sums.erase(0);
    cout<<possible_sums.size()<<endl;
    for(int i : possible_sums){cout<< i << " ";}
    cout<<endl;
    }
  }
