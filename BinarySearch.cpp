#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ 
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}

int main(){
    int n;
    cout << "Enter the number of Elements : ";
    cin >> n;
    cout << "Enter the " << n << " Elements : ";
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
     cout << endl;
     cout << "Enter the number to be searched : ";
    int k;
    cin >> k;
    int pos = binarySearch(arr,n,k);
    cout << pos << endl;
}