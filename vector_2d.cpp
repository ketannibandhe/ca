#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // vector<vector<int> >matrix(3,vector<int>(4,1));
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<endl<<"No of rows in matrix: "<<matrix.size()<<endl;
    // cout<<"No of columns in matrix: "<<matrix[0].size()<<endl;

    
    //taking 2d array as an input from the user
    int rows,cols;
    cin>>rows;
    cin>>cols;
    vector<vector<int> >matrix(rows,vector<int>(cols,1));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<endl<<"No of rows in matrix: "<<matrix.size()<<endl;
    cout<<"No of columns in matrix: "<<matrix[0].size()<<endl;
    return 0;}