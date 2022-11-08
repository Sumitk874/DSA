#include<iostream>
#include<cmath>
using namespace std;


int mostFrequent(int* arr, int n)
{
    // code here
    int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }
 
    return element_having_max_freq;
}


int main(){
    // double i; cin>>i;
    // i = ceil(i);
    // cout << i << endl;

   int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int size = sizeof(arr) / sizeof(arr[0]);
        int mostFrequentElement = mostFrequent(arr,size);
        cout << mostFrequentElement << endl;
    }
}