#include<iostream>
using namespace std;

bool oddeven(int  n){
if(n&1){
    return 0;
}  return 1;
}
int main(){
int n;
cout << "Enter the Number : "<< endl;
cin >> n;

if (oddeven(n)){
    cout << "Even" << endl;
} 
cout << "Odd" << endl;
return 0;
}
