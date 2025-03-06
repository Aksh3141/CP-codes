#include<bits/stdc++.h>
using namespace std;

int max_val(int n){
  int max = 0;
  while(n>0){
    int t = n%10;
    n = n/10;
    if(t>max){max=t;}
    }
  return max;
  }

int main(){
  int n; cin >>n;
  int count =0;
  while(n!=0){
    int x=max_val(n);
    n-=x;
    count+=1;
    }
  cout<<count<<endl;
  
  }
