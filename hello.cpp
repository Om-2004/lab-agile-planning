#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void funky_code(vector<int> &arr){
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}

int main(){
  int n;
  cout<<"Enter size:";
  cin>>n;

  vector<int> arr(n);

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  funky_code(arr);

  return 0;
}
