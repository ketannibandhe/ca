//two pointer means use of single traversal of array
#include<iostream>
using namespace std;
int main(){
    int start=0,end,size,arr[1000],i,j;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    end=size-1;
    while(start<=end){
        if(arr[start]==0){
            start++;
        }
        else{
            if(arr[end]==0){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else{
                end--;
            }
        }
    }
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;}