//execute if the matrix is sorted both rowwise and columnwise
//but note here that the matrix is not overall sorted
#include<iostream>
using namespace std;
int main(){
    int arr[20][20],i,j,rows,cols,target;
    cin>>rows;
    cin>>cols;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Enter the target element:\n";
    cin>>target;

    i=0;
    j=rows-1;

    while(i<rows && j>=0){
        if(arr[i][j]==target){
            cout<<target<<" Found at position ["<<i<<"]["<<j<<"]"<<endl;
            return 0;
        }
        else if(arr[i][j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}