#include <iostream>
using namespace std;
int main(){
    //making array
    int arr[100];
    int num;
    cout<<"enter num: ";
    cin>>num;
    cout<<endl;
    for(int i=0;i<num;i++){
        cout<<"enter element: ";
        cin>>arr[i];
        cout<<endl;
    }

    //sorting 0s and 1s
    int low = 0;
    int mid=0;
    int high = num-1;
    while(mid<=high){
        if(arr[mid]==0){
            arr[mid]=arr[low];
            arr[low]=0;
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else {
            arr[mid]=arr[high];
            arr[high]=2;
            high--;
            
        }
    }
    
    //printing array
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
}
