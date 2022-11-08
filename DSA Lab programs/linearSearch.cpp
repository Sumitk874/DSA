#include<iostream>
using namespace std;
#include<stdbool.h>

int main(){
    int a[] = {15,6,4,98,4,8,5};
    int key;
    cout << "Enter element to be searched\n";
    cin>>key;
    bool flag=0;

    for(int i =0;i<sizeof(a);i++){
        if(a[i]==key){
            cout << "Element found at postion " << (i+1) << endl;
            flag = 1;
            break;
        }
    }if(flag == 0){
        cout << "Element not found" << endl;
    }
}