#include <iostream>
using namespace std;
int duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                if(count==2){
                    return arr[i];
                }
            }
        }
        
    }
    return -1;
}
int main(){
    int num;
    int arr[100];
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"duplicate num = "<<duplicate(arr,num);

}
