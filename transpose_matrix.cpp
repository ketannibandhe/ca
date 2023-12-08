#include<iostream>
using namespace std;
int main(){
    int arr[20][20],rows,cols;
    cin>>rows;
    cin>>cols;
    for(int i=0;i<rows;i++){
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix after transpose:\n";
    for(int i=0;i<=rows-1;i++){//**********************************
        for (int j = i+1; j < cols; j++)//************************
        {
            swap(arr[i][j],arr[j][i]); 
        }
    }
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;}


    /*
    class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix){
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int> >ans(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            ans[i][j]=matrix[j][i];
        }
    }
    return ans;
    }
};
    */