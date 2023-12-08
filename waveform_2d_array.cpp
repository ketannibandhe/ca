#include<iostream>
using namespace std;
int main(){
    int arr[20][20],i,j,rows,cols;
    cin>>rows;
    cin>>cols;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing the array like a waveform:\n";
    for(j=0;j<cols;j++){
        if(j%2==0){
            for(i=0;i<rows;i++)
                cout<<arr[i][j]<<" ";
        }
        else{
            for(i=rows-1;i>=0;i--)
                cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
        }
    return 0;}