#include<iostream>
using namespace std;

int main(){
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }

    cout << "entered array is :" << endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Determinant of the matrix is:" << endl;
    int det = ((arr[0][0])*(arr[1][1])) - ((arr[0][1])*(arr[1][0]));
    cout << det << endl;
}