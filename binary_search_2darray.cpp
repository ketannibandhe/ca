#include<iostream>
using namespace std;

void binary_search(int arr[][20],int rows,int cols,int target,int start,int end){
    int mid=start+(end-start)/2;
    while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid/cols][mid%cols]==target){
                cout<<"The number is found at position ["<<mid/cols<<"]["<<mid%cols<<"]"<<endl;
                return ;
            }
            else if (arr[mid/cols][mid%cols]>target){
                end=mid-1;
            }
            else
                start=mid+1;
        }
        
}
int main(){
    int arr[20][20],rows,cols,i,j,target;
    cin>>rows;
    cin>>cols;

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"enter target element:\n";
    cin>>target;

    int start=0;
    int end=rows*cols-1;

    binary_search(arr,rows,cols,target,start,end);   
    return 0;}