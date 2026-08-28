#include <iostream>
using namespace std;
int main(){
    //count all occurance using binary search
    int arr1[10]={1,2,3,3,3,7,7,7,8,9};
    int value = 3;
    int count=0;
    int start = 0;
    int end = 9;
    int f_occ=0;
    int l_occ=0;
    
    while(start<=end){
        int mid = (start+end)/2;
        if(arr1[mid]==value){
            //first occurance
            for(int i=mid;i>0;i--){
                if(arr1[i]!=value){
                    f_occ=i;
                    break;
                }
            }
            //last occurance
            for(int i=mid;i<10;i++){
                if(arr1[i]!=value){
                    l_occ=i;
                    break;
                }
            }
        }
        if(arr1[mid]>value){
            end = mid-1;
        }
        else{
            start =mid+1;
        }
    }
    cout<<"first occurance of "<<value<<" is at index "<<f_occ+1<<endl;
    cout<<"last occurance of "<<value<<" is at index "<<l_occ-1<<endl;
    cout<<"total occurance of "<<value<<" is: "<<l_occ-f_occ-1<<" times.";
}
