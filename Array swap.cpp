#include <iostream>
using namespace std;

void arrrev(int arr[],int size){
    int start = 0 ; int end = size  - 1;
    while (start <= end){
    swap(arr[start],arr[end]);
    start++;end--;
    }
}

void arrout(int arr[],int size){ 
for(int i =0;i<size;i++){
    cout << arr[i]<< " ";
}   
   
}
int main(){
int arr[5] = {5,9,3,7,2};

arrrev(arr,5);
arrout(arr,5);
return 0;
}