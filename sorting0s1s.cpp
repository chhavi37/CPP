#include <iostream>
using namespace std;
int main(){

  /* expected output: 
      given array --> 1 0 1 1 0 0
      output array --> 0 0 0 1 1 1 */
  
  
    //making array
    int arr[100];
    int num;
    cout<<"enter number of elements: "<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"enter element: ";
        cin>>arr[i];
        cout<<endl;
    }

    //sorting 0s and 1s
    int i = 0;
    int j = num-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }else if(arr[j]==1){
            j--;
        }else if(arr[i]==1&& arr[j]==0){
            arr[i]=0;
            arr[j]=1;
        }
    }
    
    //printing array
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
}
