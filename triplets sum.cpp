#include <iostream>
using namespace std;
int main(){
int n,arr[n],sum;
int t = 0;
cout << "No of elements :"<<endl;
cin >> n;
cout << "Sum to be compared :"<<endl;
cin >> sum;
cout << "Enter the elements of the array" << endl;
for(int i = 0; i < n;i++){
    cin >>  arr[i];
}
 for(int j= 0;j<n;j++){
    for(int k=j+1;k<n;k++){
        for(int l=k+1;l<n;l++){
            if(arr[j]+arr[k]+arr[l] == sum){
                cout << arr[j] << " " << arr[k] << " " << arr[l] << " are the triplets" << endl;
                t = 1;
            }
        }
    }
 }
 if(t == 0){cout << "No triplets are found.";
}
}