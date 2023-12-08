#include<iostream>
using namespace std;
int main(){
    int arr[20][20],rows,cols,i,j,n;
    cin>>rows;
    cin>>cols;
    cout<<"Given array:\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    //reverse row wise
    for(int i=0;i<rows;i++){
        int start=0;
        int end=cols-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    
    //reverse column wise
    for(int j=0;j<cols;j++){
        int start=0;
        int end=rows-1;
        while(start<end){
            swap(arr[start][j],arr[end][j]);
            start++;
            end--;
        }
    }
    
    cout<<"Array after 180 degree rotation"<<endl;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}