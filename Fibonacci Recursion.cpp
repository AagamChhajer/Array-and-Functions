#include <iostream>
using namespace std;

int fib(int n){
    if(n > 2){
        return fib(n-1)+fib(n-2);
    }
    if(n==2){
        return 1;
    }
    if(n==1){
        return 0;
    }
}
int main(){
     cout << "FIBONACCI NUMBER BY RECURSSION"<<endl;
     int n;
    cout <<"Enter which term you want in the FIBONACCI SERIES: ";
    cin >> n;
    int ans = fib(n);
    cout << "The number at "<<n<<"th position in FIBONACCI SERIES is "<<ans<<" !!!!"<<endl;
    return 0;
}