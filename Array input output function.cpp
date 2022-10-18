#include <iostream>
using namespace std;

void arrayinput(int arr[],int size){
for(int i = 0;i < size ; i++){
    cin >> arr[i];
}
}

void arrayprint(int arr[],int size){
for(int i = 0;i < size ; i++){
    cout << arr[i] << " ";
}
}

int main()
{   cout << "Enter the number of elements :" << endl;
    int n;
    cin >> n;
    int arr[n];
     cout << "Enter the elements of the array :"<< endl;
    arrayinput(arr,n);
    cout << "Elements of the array are : "<< endl;
    arrayprint(arr,n);
    cout << endl;
    return 0;
}