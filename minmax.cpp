#include <iostream>
using namespace std;
int getMin(int arr[],int n){
  int min = INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min=arr[i];
    }
    return min;
int getMax(int arr[],int n){
  int min = INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
    return max;
int main(){
  int size;
  cout<<"enter size of array: ";
  cin>>size;
  int num[100];
  for(int i=0;i<size;i++){
    cin>>num[i];
  }
  cout<<"Minimum is = "<<getMin(num,size)<<endl;
  cout<<"Maximum is = "<<getMax(num,size)<<endl;
}
