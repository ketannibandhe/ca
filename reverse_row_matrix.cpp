#include<iostream>
using namespace std;
int main(){
    int arr[20][20],rows,cols,i,j,sum=0;
    cin>>rows;
    cin>>cols;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<rows;i++){
        for(int k=cols-1,j=0;j<k;j++,k--){
                int temp=arr[i][j];
                arr[i][j]=arr[i][k];
                arr[i][k]=temp;
        }
    }

    cout<<"array after reversing each row\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;}