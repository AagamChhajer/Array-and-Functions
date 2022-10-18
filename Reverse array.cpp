#include <iostream>
using namespace std;

void arrayinput(int arr[],int size){
for(int i = 0;i < size ; i++){
    cin >> arr[i];
}
}
void arrayoutput(int arr[],int size){
for(int i = size-1 ;i >= 0 ; i--){
    cout <<  arr[i] << " ";
}
}

int main()
{   cout << "Enter the number of elements :" << endl;
    int n;
    cin >> n;
    int arr[n];
     cout << "Enter the elements of the array :"<< endl;
    arrayinput(arr,n);
     cout << "Reverse of array is : " << endl;
    arrayoutput(arr,n);
    
    cout << endl; 
    return 0;
}