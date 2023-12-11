/* 
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

Input :
1 1 1
1 0 1
1 1 1

Output :
1 0 1
0 0 0
1 0 1
*/

#include<iostream>
using namespace std;

int main(){
    int m=3,n=3;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    int x,y;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0){
                x=i,y=j;
                
            }
        }
    }
    for(int k=0;k<n;k++){
        a[x][k]=0;
    }
    for(int l=0;l<m;l++){
        a[l][y]=0;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}