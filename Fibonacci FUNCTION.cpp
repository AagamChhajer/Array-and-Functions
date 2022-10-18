#include<iostream>
using namespace std;

 int fib(int n){
int i = 0;int j = 1;int sum = 0;
if (n == 1){
    sum = 0;
}
 if(n == 2){
    sum = 1;
}
while(n-2){
     sum = i + j;
     i = j;
     j = sum;
    n--;
}
return sum;
}
int main(){
int n;
cin >> n;

cout << fib(n) << endl;
}