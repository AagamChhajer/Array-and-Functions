#include <iostream>
using namespace std;
void read(int arr[],int size){
    for(int i = 0;i<size;i++){
        cin >> arr[i];
    }
}

int binarySearch(int arr[],int initial,int n,int k){
    int i = initial;
    //for middle term index;
    int mid = ( i + (n-1) ) / 2;
    if (arr[mid] == k){
        return mid;
    }
    if(arr[mid] > k){
        mid = ( i + mid ) / 2;
        int ans = binarySearch(arr,i,mid,k);
        return ans;
    }
    if(arr[mid] < k){
        i = mid+1;
        mid = ( mid + (n-1) ) / 2;
        int ans = binarySearch(arr,i,mid,k);
        return ans;
    }
}

int main(){
    int n,arr[n];
    cout << "Enter the number of Elements : ";
    cin >> n;
    cout << "Enter the " << n << " Elements : ";
    read(arr,n);
    cout << "Enter the number to be searched : ";
    int k;
    cin >> k;
    int i = 0;
    int pos = binarySearch(arr,i,n,k);
    cout << pos << endl;
}