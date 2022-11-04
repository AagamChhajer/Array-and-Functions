#include <iostream>
using namespace std;

int unq(int arr[],int size,int n){
int count = 2;
   for(int i = 0; i < size ; i++){
    if(arr[i] == n){
     count--;
    } 
    } 
   return count;
}
int main(){
    int n,arr[n],k;
    cout << "Enter the number of elements :" << endl;
    cin >> n;
    cout << "Enter the elements of the array : " << endl;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    cout << "Enter the number to find whether unique or not : "<<endl;
    cin >> k;

if(unq(arr,n,k) == 0){
    cout << "Not unique" << endl;
}
else if(unq(arr,n,k) == 1){cout << "Unique" << endl;}
else if(unq(arr,n,k) == 2){cout << "Not in array" << endl;}
}