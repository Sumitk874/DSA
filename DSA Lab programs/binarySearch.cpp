#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            // go to right part;
            start = mid+1;
        }else{
            // go to left part;
            end = mid-1;
        }
        mid=(start+end)/2;
    }
}
int main(){
    int a1[]={1,58,45,98,68,42,31};
    int a2[]={1,6,9,7,2,3};


    int index1 = binarySearch(a1,7,45);
    cout << "Found at index " << index1 << endl;

    int index2 = binarySearch(a2,6,7);
    cout << "Found at index " << index2 << endl;


    //using stl binary search
    cout << binary_search(a1,a1+7,58) << endl; 
    //binary_search(startaddress, endaddress, valuetofind)


}

