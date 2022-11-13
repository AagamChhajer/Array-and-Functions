#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no. of elements :" << endl;
    cin >> n;
     int arr[n];
   cout << "Enter the elements : " << endl;
   for(int i = 0;i < n;i++){
    cin >> arr[i];
   }
   int i = 0,j = n-1;
   while(i < j){
    if(arr[i] == 1 && arr[j] == 0 && i<j){
     swap(arr[i],arr[j]);
    }
    if(arr[i] == 0 && i<j){
        i++;
    }
    if(arr[j] == 1 && i<j){
        j--;
    }
   }
   for(int k = 0;k<n;k++){
    cout << arr[k] << " ";
   }
   cout << endl;
}