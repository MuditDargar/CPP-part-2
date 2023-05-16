#include<iostream>
using namespace std;

int main(){
    int n=3;
    int m=3;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    if(arr[0][1]>arr[0][2]+arr[2][1]){
        arr[0][1]=arr[0][2]+arr[2][1];
    }
    if(arr[0][2]>arr[1][0]+arr[1][2]){
        arr[0][2]=arr[1][0]+arr[1][2];
    }
    if(arr[1][0]>arr[1][2]+arr[2][0]){
        arr[1][0]=arr[1][2]+arr[2][0];
    }
    if(arr[1][2]>arr[1][0]+arr[0][2]){
        arr[1][2]=arr[1][0]+arr[0][2];
    }
    if(arr[2][0]>arr[2][1]+arr[1][0]){
        arr[2][0]=arr[2][1]+arr[1][0];
    }
    if(arr[2][1]>arr[2][0]+arr[0][1]){
        arr[2][1]=arr[2][0]+arr[0][1];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
