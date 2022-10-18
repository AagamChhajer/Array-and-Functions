#include <iostream>
 #include <climits>
using namespace std;

void arrayinput(int arr[],int size){
for(int i = 0;i < size ; i++){
    cin >> arr[i];
}
}

int intmax(int arr[],int size){
int  maxint = INT_MIN ;
for (int i = 0;i < size ; i++){
    maxint = max(maxint,arr[i]);
}
return maxint;
}

int intmin(int arr[],int size){
int  minint = INT_MAX ;
for (int i = 0;i < size ; i++){
    minint = min(minint,arr[i]);
}
return minint;
}
int main()
{   cout << "Enter the number of elements :" << endl;
    int n;
    cin >> n;
    int arr[n];
     cout << "Enter the elements of the array :"<< endl;
    arrayinput(arr,n);
     cout << "MAX value of array is : "<< intmax(arr,n);
    cout << endl;
    cout << "MIN value of array is : "<< intmin(arr,n);
    cout << endl;
    return 0;
}