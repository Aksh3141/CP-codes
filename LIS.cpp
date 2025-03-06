#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n; vector<int> array;
  int len=n;
  while(n--){
    int a; cin >>a;
    array.push_back(a);
    }
  vector<int>longest(len,1);
  for(int i=1;i<len;i++){
    int max_val=0;
    for(int j=0; j<i; j++){
      if(array[i]>array[j]){
        if(longest[j]>max_val){max_val=longest[j]; longest[i]=max_val+1;}
        }
      }
    }
  int ans =0;
  for(int i=0; i<len;i++){if (longest[i]>ans) {ans = longest[i];}}
  cout<<ans<<endl;
  }
