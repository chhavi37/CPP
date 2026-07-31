#include <iostream>
using namespace std;
void swapAlternate(int arr[],int n){
    for(int i=0;i<n-1;i+=2){
        int temp;
        temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
int main(){
    int num;
    cin>>num;
    int arr[100];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,num);
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }

}
