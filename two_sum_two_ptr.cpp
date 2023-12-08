#include<iostream>
#include<vector>
using namespace std;
int binary_search(int arr[],int s,int e,int target){
    int start=s;
    int end=e;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            return arr[mid];
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[500],size,i,target,num2;
    vector<int>v;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the target sum:\n";
    cin>>target;
    for(i=0;i<size-1;i++){
        num2=target-arr[i];
        if(num2==binary_search(arr,i+1,size-1,num2)){
            cout<<arr[i]<<" "<<binary_search(arr,i+1,size-1,num2)<<endl;
            // v.push_back(arr[i]);
            // v.push_back(binary_search(arr,i+1,size-1,num2));
            // for(auto i:v){
            //     cout<<i<<" ";
            // }
        }
        cout<<endl;
    }
    return 0;}