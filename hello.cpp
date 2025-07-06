#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dunky_code(vector<int> &nums){
  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
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
