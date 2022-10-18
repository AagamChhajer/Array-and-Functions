#include <iostream>
using namespace std;

int z(int i){
    int a = 0;
    while(i){

        if(i & 1){ 
        a++;}
        i = i>>1;
    }
    
    return a;
}
int main(){
int i,j;
cin >> i >> j;

    cout << z(i) + z(j) << endl;
}