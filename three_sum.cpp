#include<iostream>
using namespace std;
int binary_search(int arr[],int size,int j,int num3){
    int l=j+1;
    int r=size-1;
    int mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(arr[mid]==num3){
            return mid;
        }
        else if(arr[mid]>num3){
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return -1;
}

int main(){
    int arr[500],i,j,size,target,num3;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target sum:"<<endl;
    cin>>target;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size-2;j++){
            num3=target-arr[i]-arr[j];
            if(num3==arr[binary_search(arr,size,j,num3)]){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[binary_search(arr,size,j,num3)]<<endl;
            }
        }
    }
    
    return 0;}
