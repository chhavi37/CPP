#include <iostream>
using namespace std;
int find(int arr[],int n){
  for(int i=0;i<n;i++){
    int x = arr[i];
    int count = 0;
    for(int j=0;j<n;j++){
      if(arr[j]==x){ count++;
                   }
    }
    if(count==1){
      return x;
    }
  }
  return -1;
}
int main(){
  int num;
  cin>>num;
  int arr[100];
  for(int i=0;i<num;i++){
    cin>>arr[i];
  }
  cout<<"desired element= "<<find(arr,num)<<endl; }
