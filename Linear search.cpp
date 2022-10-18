#include <iostream>
using namespace std;

bool search(int arr[], int size,int n){

    for(int i = 0;i < size ; i++){
        if(arr[i] == n){
            return 1;
        }
    }
    return 0;
}
int main(){
int arr[10] = {2,5,-9,8,1,-7,21,-15,66,33};
cout << "Enter the number to be searched : "<< endl;
int n;
cin >> n;
if(search(arr,10,n)){
    cout << "Present" << endl;
}
else { cout << "Absent" << endl;
}

}