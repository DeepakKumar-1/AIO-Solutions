#include<bits/stdc++.h>
using namespace std;
int main(){
    // take Size of the Array
    int n;
    cin >> n;
    int **arr = new int *[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
        for(int j=0; j<n; j++){
            cin>> arr[i][j];
        }
    }
    // Display Array in JigJag Manner
    for(int col=0; col<n; col++){
        if(col % 2 == 0){
            for(int row = 0; row <n; row++){
                cout << arr[row][col]<<" ";
            }
        }else{
            for(int row = n - 1; row >= 0; row--){
                cout << arr[row][col]<<" ";
            }
        }
    }
    return 0;
}