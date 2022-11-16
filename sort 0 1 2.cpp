  #include <iostream>
  using namespace std;
  
  int main(){ 
  int n;
  cin >> n;
  int l = 0, m = 0, r = n-1;
  int arr[n];
  for(int i = 0;i<n;i++){ 
    cin >> arr[i];
  }
    while(m<=r){
        
         switch(arr[m]){
             case 0:
                 swap(arr[l], arr[m]);
                 l++;
                 m++;
                 break;
             case 1:
                 m++;
                 break;
             case 2:
                 swap(arr[m], arr[r]);
                 r--;
                 break;
         }
    }
    for(int i = 0;i<n;i++){
        cout << arr[i] << " " ;
    }
}