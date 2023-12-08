#include<iostream>
using namespace std;
int main(){
    int arr[500],i,size,count0=0,count1=0;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
    }
    for(i=0;i<count0;i++){
        arr[i]=0;
    }
    for(i=count0;i<count0+count1;i++){
        arr[i]=1;
    }
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;}