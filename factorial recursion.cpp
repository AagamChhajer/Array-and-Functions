#include <iostream>
using namespace std;

int fac(int n){
    if(n > 1){  
return n*fac(n-1);//sending fac(4) to func
    }
    else {return 1;}
}
int main(){
int n = 5;
cout << fac(n);
}