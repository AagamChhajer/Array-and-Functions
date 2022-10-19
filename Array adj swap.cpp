#include <iostream>
using namespace std;

void arrrev(int arr[],int size){
    int start = 0 ; int end = 1;
    while (size >= end){
    swap(arr[start],arr[end]);
    start += 2;end += 2;
    }
}
void arrout(int arr[],int size){ 
for(int i =0;i<size;i++){
    cout << arr[i]<< " ";
}   
   
}
int main(){
int arr[6] = {5,9,3,7,2,8};
arrrev(arr,6);
arrout(arr,6);cout << endl;
return 0;
}